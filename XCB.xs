#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"
#include <xcb.h>
#include <xinerama.h>

#include "ppport.h"

#include "typedefs.h"
#include "xs_object_magic.h"

typedef xcb_connection_t XCBConnection;

/* copied from xcb-util */

typedef enum {
XCB_ICCCM_SIZE_HINT_US_POSITION = 1 << 0,
  XCB_ICCCM_SIZE_HINT_US_SIZE = 1 << 1,
  XCB_ICCCM_SIZE_HINT_P_POSITION = 1 << 2,
  XCB_ICCCM_SIZE_HINT_P_SIZE = 1 << 3,
  XCB_ICCCM_SIZE_HINT_P_MIN_SIZE = 1 << 4,
  XCB_ICCCM_SIZE_HINT_P_MAX_SIZE = 1 << 5,
  XCB_ICCCM_SIZE_HINT_P_RESIZE_INC = 1 << 6,
  XCB_ICCCM_SIZE_HINT_P_ASPECT = 1 << 7,
  XCB_ICCCM_SIZE_HINT_BASE_SIZE = 1 << 8,
  XCB_ICCCM_SIZE_HINT_P_WIN_GRAVITY = 1 << 9
  } xcb_icccm_size_hints_flags_t;

typedef enum {
  XCB_ICCCM_WM_STATE_WITHDRAWN = 0,
  XCB_ICCCM_WM_STATE_NORMAL = 1,
  XCB_ICCCM_WM_STATE_ICONIC = 3
} xcb_icccm_wm_state_t;

typedef enum {
  XCB_ICCCM_WM_HINT_INPUT = (1L << 0),
  XCB_ICCCM_WM_HINT_STATE = (1L << 1),
  XCB_ICCCM_WM_HINT_ICON_PIXMAP = (1L << 2),
  XCB_ICCCM_WM_HINT_ICON_WINDOW = (1L << 3),
  XCB_ICCCM_WM_HINT_ICON_POSITION = (1L << 4),
  XCB_ICCCM_WM_HINT_ICON_MASK = (1L << 5),
  XCB_ICCCM_WM_HINT_WINDOW_GROUP = (1L << 6),
  XCB_ICCCM_WM_HINT_X_URGENCY = (1L << 8)
} xcb_icccm_wm_t;

typedef struct {
/** Marks which fields in this structure are defined */
int32_t flags;
/** Does this application rely on the window manager to get keyboard
    input? */
  uint32_t input;
  /** See below */
  int32_t initial_state;
  /** Pixmap to be used as icon */
  xcb_pixmap_t icon_pixmap;
  /** Window to be used as icon */
  xcb_window_t icon_window;
  /** Initial position of icon */
  int32_t icon_x, icon_y;
  /** Icon mask bitmap */
  xcb_pixmap_t icon_mask;
  /* Identifier of related window group */
  xcb_window_t window_group;
} X11_XCB_ICCCM_WMHints;

typedef struct {
/** User specified flags */
uint32_t flags;
/** User-specified position */
int32_t x, y;
/** User-specified size */
int32_t width, height;
/** Program-specified minimum size */
int32_t min_width, min_height;
/** Program-specified maximum size */
int32_t max_width, max_height;
/** Program-specified resize increments */
int32_t width_inc, height_inc;
/** Program-specified minimum aspect ratios */
int32_t min_aspect_num, min_aspect_den;
/** Program-specified maximum aspect ratios */
int32_t max_aspect_num, max_aspect_den;
/** Program-specified base size */
int32_t base_width, base_height;
/** Program-specified window gravity */
uint32_t win_gravity;
} X11_XCB_ICCCM_SizeHints;

#include "XCB.inc"

typedef int intArray;

intArray *intArrayPtr(int num) {
        intArray *array;

        New(0, array, num, intArray);

        return array;
}

static SV *
_new_event_object(xcb_generic_event_t *event)
{
    int type;
    char *objname;
    HV* hash = newHV();

    hv_store(hash, "response_type", strlen("response_type"), newSViv(event->response_type), 0);
    hv_store(hash, "sequence", strlen("sequence"), newSViv(event->sequence), 0);

    // Strip highest bit (set when the event was generated by another client)
    type = (event->response_type & 0x7F);

    switch (type) {
        case XCB_MAP_NOTIFY:
        {
            objname = "X11::XCB::Event::MapNotify";
            xcb_map_notify_event_t *e = (xcb_map_notify_event_t*)event;
            hv_store(hash, "event", strlen("event"), newSViv(e->event), 0);
            hv_store(hash, "window", strlen("window"), newSViv(e->window), 0);
            hv_store(hash, "override_redirect", strlen("override_redirect"), newSViv(e->override_redirect), 0);
        }
        break;

        case XCB_FOCUS_IN:
        case XCB_FOCUS_OUT:
        {
            objname = "X11::XCB::Event::Focus";
            xcb_focus_in_event_t *e = (xcb_focus_in_event_t*)event;
            hv_store(hash, "event", strlen("event"), newSViv(e->event), 0);
            hv_store(hash, "mode", strlen("mode"), newSViv(e->mode), 0);
        }
        break;

        case XCB_CLIENT_MESSAGE:
        {
            objname = "X11::XCB::Event::ClientMessage";
            xcb_client_message_event_t *e = (xcb_client_message_event_t*)event;
            hv_store(hash, "window", strlen("window"), newSViv(e->window), 0);
            hv_store(hash, "type", strlen("type"), newSViv(e->type), 0);
            hv_store(hash, "data", strlen("data"), newSVpvn(&(e->data), 20), 0);
        }
        break;

        default:
            objname = "X11::XCB::Event::Generic";
            break;
    }


    return sv_bless(newRV_noinc((SV*)hash), gv_stashpv(objname, 1));
}


MODULE = X11::XCB PACKAGE = X11::XCB

BOOT:
{
    HV *stash = gv_stashpvn("X11::XCB", strlen("X11::XCB"), FALSE);
    HV *export_tags = get_hv("X11::XCB::EXPORT_TAGS", FALSE);
    SV **export_tags_all = hv_fetch(export_tags, "all", strlen("all"), 0);
    SV *tmpsv;
    AV *tags_all;

    if (!(export_tags_all &&
        SvROK(*export_tags_all) &&
        (tmpsv = (SV*)SvRV(*export_tags_all)) &&
        SvTYPE(tmpsv) == SVt_PVAV &&
        (tags_all = (AV*)tmpsv)))
    {
        croak("$EXPORT_TAGS{all} is not an array reference");
    }

    boot_constants(stash, tags_all);
}

void
_connect_and_attach_struct(self)
    SV *self
  PREINIT:
    XCBConnection *xcbconnbuf;
  CODE:
    assert(sv_derivered_from(self, __PACKAGE__));
    SV **disp = hv_fetch((HV*)SvRV(self), "display", strlen("display"), 0);
    if(!disp)
        croak("Attribute 'display' is required");

    const char *displayname = SvPV_nolen(*disp);
    int screenp;

    xcbconnbuf = xcb_connect(displayname, &screenp);
    /* XXX: error checking */
    xs_object_magic_attach_struct(aTHX_ SvRV(self), xcbconnbuf);

void
DESTROY(self)
    XCBConnection *self
  CODE:
    Safefree(self);

int
has_error(self)
    XCBConnection * self
  CODE:
    RETVAL = xcb_connection_has_error(self);
  OUTPUT:
    RETVAL


int
get_file_descriptor(self)
    XCBConnection * self
  CODE:
    RETVAL = xcb_get_file_descriptor(self);
  OUTPUT:
    RETVAL


SV *
wait_for_event(self)
    XCBConnection * self
  PREINIT:
    HV * hash;
    SV * result;
    xcb_generic_event_t * event;
  CODE:
    event = xcb_wait_for_event(self);
    if (event == NULL) {
        RETVAL = &PL_sv_undef;
    } else {
        RETVAL = _new_event_object(event);
    }
  OUTPUT:
    RETVAL


SV *
poll_for_event(self)
    XCBConnection * self
  PREINIT:
    HV * hash;
    SV * result;
    xcb_generic_event_t * event;
  CODE:
    event = xcb_poll_for_event(self);
    if (event == NULL) {
        RETVAL = &PL_sv_undef;
    } else {
        RETVAL = _new_event_object(event);
    }
  OUTPUT:
    RETVAL


int
get_root_window(conn)
    XCBConnection *conn
  CODE:
    RETVAL = xcb_setup_roots_iterator(xcb_get_setup(conn)).data->root;
  OUTPUT:
    RETVAL


int
generate_id(conn)
    XCBConnection *conn
  CODE:
    RETVAL = xcb_generate_id(conn);
  OUTPUT:
    RETVAL

void
flush(conn)
    XCBConnection *conn
  CODE:
    xcb_flush(conn);


INCLUDE: XCB_util.inc

INCLUDE: XCB_xs.inc

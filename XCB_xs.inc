MODULE = X11::XCB PACKAGE = XCBChar2b
XCBChar2b *
new(self,byte1,byte2)
    char *self
    uint8_t byte1
    uint8_t byte2
  PREINIT:
    XCBChar2b *buf;
  CODE:
    New(0, buf, 1, XCBChar2b);
    buf->byte1 = byte1;
    buf->byte2 = byte2;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBChar2bPtr

uint8_t
byte1(self)
    XCBChar2b * self
  CODE:
    RETVAL = self->byte1;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBChar2bPtr

uint8_t
byte2(self)
    XCBChar2b * self
  CODE:
    RETVAL = self->byte2;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBPoint
XCBPoint *
new(self,x,y)
    char *self
    uint16_t x
    uint16_t y
  PREINIT:
    XCBPoint *buf;
  CODE:
    New(0, buf, 1, XCBPoint);
    buf->x = x;
    buf->y = y;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBPointPtr

uint16_t
x(self)
    XCBPoint * self
  CODE:
    RETVAL = self->x;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBPointPtr

uint16_t
y(self)
    XCBPoint * self
  CODE:
    RETVAL = self->y;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRectangle
XCBRectangle *
new(self,x,y,width,height)
    char *self
    uint16_t x
    uint16_t y
    uint16_t width
    uint16_t height
  PREINIT:
    XCBRectangle *buf;
  CODE:
    New(0, buf, 1, XCBRectangle);
    buf->x = x;
    buf->y = y;
    buf->width = width;
    buf->height = height;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRectanglePtr

uint16_t
x(self)
    XCBRectangle * self
  CODE:
    RETVAL = self->x;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRectanglePtr

uint16_t
y(self)
    XCBRectangle * self
  CODE:
    RETVAL = self->y;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRectanglePtr

uint16_t
width(self)
    XCBRectangle * self
  CODE:
    RETVAL = self->width;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRectanglePtr

uint16_t
height(self)
    XCBRectangle * self
  CODE:
    RETVAL = self->height;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBArc
XCBArc *
new(self,x,y,width,height,angle1,angle2)
    char *self
    uint16_t x
    uint16_t y
    uint16_t width
    uint16_t height
    uint16_t angle1
    uint16_t angle2
  PREINIT:
    XCBArc *buf;
  CODE:
    New(0, buf, 1, XCBArc);
    buf->x = x;
    buf->y = y;
    buf->width = width;
    buf->height = height;
    buf->angle1 = angle1;
    buf->angle2 = angle2;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBArcPtr

uint16_t
x(self)
    XCBArc * self
  CODE:
    RETVAL = self->x;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBArcPtr

uint16_t
y(self)
    XCBArc * self
  CODE:
    RETVAL = self->y;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBArcPtr

uint16_t
width(self)
    XCBArc * self
  CODE:
    RETVAL = self->width;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBArcPtr

uint16_t
height(self)
    XCBArc * self
  CODE:
    RETVAL = self->height;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBArcPtr

uint16_t
angle1(self)
    XCBArc * self
  CODE:
    RETVAL = self->angle1;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBArcPtr

uint16_t
angle2(self)
    XCBArc * self
  CODE:
    RETVAL = self->angle2;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBFormat
XCBFormat *
new(self,depth,bits_per_pixel,scanline_pad)
    char *self
    uint8_t depth
    uint8_t bits_per_pixel
    uint8_t scanline_pad
  PREINIT:
    XCBFormat *buf;
  CODE:
    New(0, buf, 1, XCBFormat);
    buf->depth = depth;
    buf->bits_per_pixel = bits_per_pixel;
    buf->scanline_pad = scanline_pad;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBFormatPtr

uint8_t
depth(self)
    XCBFormat * self
  CODE:
    RETVAL = self->depth;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBFormatPtr

uint8_t
bits_per_pixel(self)
    XCBFormat * self
  CODE:
    RETVAL = self->bits_per_pixel;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBFormatPtr

uint8_t
scanline_pad(self)
    XCBFormat * self
  CODE:
    RETVAL = self->scanline_pad;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtype
XCBVisualtype *
new(self,visual_id,class,bits_per_rgb_value,colormap_entries,red_mask,green_mask,blue_mask)
    char *self
    uint32_t visual_id
    uint8_t class
    uint8_t bits_per_rgb_value
    uint16_t colormap_entries
    uint32_t red_mask
    uint32_t green_mask
    uint32_t blue_mask
  PREINIT:
    XCBVisualtype *buf;
  CODE:
    New(0, buf, 1, XCBVisualtype);
    buf->visual_id = visual_id;
    buf->_class = class;
    buf->bits_per_rgb_value = bits_per_rgb_value;
    buf->colormap_entries = colormap_entries;
    buf->red_mask = red_mask;
    buf->green_mask = green_mask;
    buf->blue_mask = blue_mask;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtypePtr

uint32_t
visual_id(self)
    XCBVisualtype * self
  CODE:
    RETVAL = self->visual_id;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtypePtr

uint8_t
class(self)
    XCBVisualtype * self
  CODE:
    RETVAL = self->_class;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtypePtr

uint8_t
bits_per_rgb_value(self)
    XCBVisualtype * self
  CODE:
    RETVAL = self->bits_per_rgb_value;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtypePtr

uint16_t
colormap_entries(self)
    XCBVisualtype * self
  CODE:
    RETVAL = self->colormap_entries;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtypePtr

uint32_t
red_mask(self)
    XCBVisualtype * self
  CODE:
    RETVAL = self->red_mask;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtypePtr

uint32_t
green_mask(self)
    XCBVisualtype * self
  CODE:
    RETVAL = self->green_mask;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBVisualtypePtr

uint32_t
blue_mask(self)
    XCBVisualtype * self
  CODE:
    RETVAL = self->blue_mask;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBDepth
XCBDepth *
new(self,depth,visuals_len)
    char *self
    uint8_t depth
    uint16_t visuals_len
  PREINIT:
    XCBDepth *buf;
  CODE:
    New(0, buf, 1, XCBDepth);
    buf->depth = depth;
    buf->visuals_len = visuals_len;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBScreen
XCBScreen *
new(self,root,default_colormap,white_pixel,black_pixel,current_input_masks,width_in_pixels,height_in_pixels,width_in_millimeters,height_in_millimeters,min_installed_maps,max_installed_maps,root_visual,backing_stores,save_unders,root_depth,allowed_depths_len)
    char *self
    uint32_t root
    uint32_t default_colormap
    uint32_t white_pixel
    uint32_t black_pixel
    uint32_t current_input_masks
    uint16_t width_in_pixels
    uint16_t height_in_pixels
    uint16_t width_in_millimeters
    uint16_t height_in_millimeters
    uint16_t min_installed_maps
    uint16_t max_installed_maps
    uint32_t root_visual
    uint8_t backing_stores
    int save_unders
    uint8_t root_depth
    uint8_t allowed_depths_len
  PREINIT:
    XCBScreen *buf;
  CODE:
    New(0, buf, 1, XCBScreen);
    buf->root = root;
    buf->default_colormap = default_colormap;
    buf->white_pixel = white_pixel;
    buf->black_pixel = black_pixel;
    buf->current_input_masks = current_input_masks;
    buf->width_in_pixels = width_in_pixels;
    buf->height_in_pixels = height_in_pixels;
    buf->width_in_millimeters = width_in_millimeters;
    buf->height_in_millimeters = height_in_millimeters;
    buf->min_installed_maps = min_installed_maps;
    buf->max_installed_maps = max_installed_maps;
    buf->root_visual = root_visual;
    buf->backing_stores = backing_stores;
    buf->save_unders = save_unders;
    buf->root_depth = root_depth;
    buf->allowed_depths_len = allowed_depths_len;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSetup_request
XCBSetup_request *
new(self,byte_order,protocol_major_version,protocol_minor_version,authorization_protocol_name_len,authorization_protocol_data_len)
    char *self
    uint8_t byte_order
    uint16_t protocol_major_version
    uint16_t protocol_minor_version
    uint16_t authorization_protocol_name_len
    uint16_t authorization_protocol_data_len
  PREINIT:
    XCBSetup_request *buf;
  CODE:
    New(0, buf, 1, XCBSetup_request);
    buf->byte_order = byte_order;
    buf->protocol_major_version = protocol_major_version;
    buf->protocol_minor_version = protocol_minor_version;
    buf->authorization_protocol_name_len = authorization_protocol_name_len;
    buf->authorization_protocol_data_len = authorization_protocol_data_len;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSetup_failed
XCBSetup_failed *
new(self,status,reason_len,protocol_major_version,protocol_minor_version,length)
    char *self
    uint8_t status
    uint8_t reason_len
    uint16_t protocol_major_version
    uint16_t protocol_minor_version
    uint16_t length
  PREINIT:
    XCBSetup_failed *buf;
  CODE:
    New(0, buf, 1, XCBSetup_failed);
    buf->status = status;
    buf->reason_len = reason_len;
    buf->protocol_major_version = protocol_major_version;
    buf->protocol_minor_version = protocol_minor_version;
    buf->length = length;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSetup_authenticate
XCBSetup_authenticate *
new(self,status,length)
    char *self
    uint8_t status
    uint16_t length
  PREINIT:
    XCBSetup_authenticate *buf;
  CODE:
    New(0, buf, 1, XCBSetup_authenticate);
    buf->status = status;
    buf->length = length;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSetup
XCBSetup *
new(self,status,protocol_major_version,protocol_minor_version,length,release_number,resource_id_base,resource_id_mask,motion_buffer_size,vendor_len,maximum_request_length,roots_len,pixmap_formats_len,image_byte_order,bitmap_format_bit_order,bitmap_format_scanline_unit,bitmap_format_scanline_pad,min_keycode,max_keycode)
    char *self
    uint8_t status
    uint16_t protocol_major_version
    uint16_t protocol_minor_version
    uint16_t length
    uint32_t release_number
    uint32_t resource_id_base
    uint32_t resource_id_mask
    uint32_t motion_buffer_size
    uint16_t vendor_len
    uint16_t maximum_request_length
    uint8_t roots_len
    uint8_t pixmap_formats_len
    uint8_t image_byte_order
    uint8_t bitmap_format_bit_order
    uint8_t bitmap_format_scanline_unit
    uint8_t bitmap_format_scanline_pad
    uint8_t min_keycode
    uint8_t max_keycode
  PREINIT:
    XCBSetup *buf;
  CODE:
    New(0, buf, 1, XCBSetup);
    buf->status = status;
    buf->protocol_major_version = protocol_major_version;
    buf->protocol_minor_version = protocol_minor_version;
    buf->length = length;
    buf->release_number = release_number;
    buf->resource_id_base = resource_id_base;
    buf->resource_id_mask = resource_id_mask;
    buf->motion_buffer_size = motion_buffer_size;
    buf->vendor_len = vendor_len;
    buf->maximum_request_length = maximum_request_length;
    buf->roots_len = roots_len;
    buf->pixmap_formats_len = pixmap_formats_len;
    buf->image_byte_order = image_byte_order;
    buf->bitmap_format_bit_order = bitmap_format_bit_order;
    buf->bitmap_format_scanline_unit = bitmap_format_scanline_unit;
    buf->bitmap_format_scanline_pad = bitmap_format_scanline_pad;
    buf->min_keycode = min_keycode;
    buf->max_keycode = max_keycode;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBTimecoord
XCBTimecoord *
new(self,time,x,y)
    char *self
    uint32_t time
    uint16_t x
    uint16_t y
  PREINIT:
    XCBTimecoord *buf;
  CODE:
    New(0, buf, 1, XCBTimecoord);
    buf->time = time;
    buf->x = x;
    buf->y = y;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBTimecoordPtr

uint32_t
time(self)
    XCBTimecoord * self
  CODE:
    RETVAL = self->time;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBTimecoordPtr

uint16_t
x(self)
    XCBTimecoord * self
  CODE:
    RETVAL = self->x;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBTimecoordPtr

uint16_t
y(self)
    XCBTimecoord * self
  CODE:
    RETVAL = self->y;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBFontprop
XCBFontprop *
new(self,name,value)
    char *self
    uint32_t name
    uint32_t value
  PREINIT:
    XCBFontprop *buf;
  CODE:
    New(0, buf, 1, XCBFontprop);
    buf->name = name;
    buf->value = value;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBFontpropPtr

uint32_t
name(self)
    XCBFontprop * self
  CODE:
    RETVAL = self->name;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBFontpropPtr

uint32_t
value(self)
    XCBFontprop * self
  CODE:
    RETVAL = self->value;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBCharinfo
XCBCharinfo *
new(self,left_side_bearing,right_side_bearing,character_width,ascent,descent,attributes)
    char *self
    uint16_t left_side_bearing
    uint16_t right_side_bearing
    uint16_t character_width
    uint16_t ascent
    uint16_t descent
    uint16_t attributes
  PREINIT:
    XCBCharinfo *buf;
  CODE:
    New(0, buf, 1, XCBCharinfo);
    buf->left_side_bearing = left_side_bearing;
    buf->right_side_bearing = right_side_bearing;
    buf->character_width = character_width;
    buf->ascent = ascent;
    buf->descent = descent;
    buf->attributes = attributes;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBCharinfoPtr

uint16_t
left_side_bearing(self)
    XCBCharinfo * self
  CODE:
    RETVAL = self->left_side_bearing;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBCharinfoPtr

uint16_t
right_side_bearing(self)
    XCBCharinfo * self
  CODE:
    RETVAL = self->right_side_bearing;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBCharinfoPtr

uint16_t
character_width(self)
    XCBCharinfo * self
  CODE:
    RETVAL = self->character_width;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBCharinfoPtr

uint16_t
ascent(self)
    XCBCharinfo * self
  CODE:
    RETVAL = self->ascent;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBCharinfoPtr

uint16_t
descent(self)
    XCBCharinfo * self
  CODE:
    RETVAL = self->descent;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBCharinfoPtr

uint16_t
attributes(self)
    XCBCharinfo * self
  CODE:
    RETVAL = self->attributes;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBStr
XCBStr *
new(self,name_len)
    char *self
    uint8_t name_len
  PREINIT:
    XCBStr *buf;
  CODE:
    New(0, buf, 1, XCBStr);
    buf->name_len = name_len;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSegment
XCBSegment *
new(self,x1,y1,x2,y2)
    char *self
    uint16_t x1
    uint16_t y1
    uint16_t x2
    uint16_t y2
  PREINIT:
    XCBSegment *buf;
  CODE:
    New(0, buf, 1, XCBSegment);
    buf->x1 = x1;
    buf->y1 = y1;
    buf->x2 = x2;
    buf->y2 = y2;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSegmentPtr

uint16_t
x1(self)
    XCBSegment * self
  CODE:
    RETVAL = self->x1;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSegmentPtr

uint16_t
y1(self)
    XCBSegment * self
  CODE:
    RETVAL = self->y1;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSegmentPtr

uint16_t
x2(self)
    XCBSegment * self
  CODE:
    RETVAL = self->x2;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBSegmentPtr

uint16_t
y2(self)
    XCBSegment * self
  CODE:
    RETVAL = self->y2;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBColoritem
XCBColoritem *
new(self,pixel,red,green,blue,flags)
    char *self
    uint32_t pixel
    uint16_t red
    uint16_t green
    uint16_t blue
    uint8_t flags
  PREINIT:
    XCBColoritem *buf;
  CODE:
    New(0, buf, 1, XCBColoritem);
    buf->pixel = pixel;
    buf->red = red;
    buf->green = green;
    buf->blue = blue;
    buf->flags = flags;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBColoritemPtr

uint32_t
pixel(self)
    XCBColoritem * self
  CODE:
    RETVAL = self->pixel;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBColoritemPtr

uint16_t
red(self)
    XCBColoritem * self
  CODE:
    RETVAL = self->red;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBColoritemPtr

uint16_t
green(self)
    XCBColoritem * self
  CODE:
    RETVAL = self->green;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBColoritemPtr

uint16_t
blue(self)
    XCBColoritem * self
  CODE:
    RETVAL = self->blue;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBColoritemPtr

uint8_t
flags(self)
    XCBColoritem * self
  CODE:
    RETVAL = self->flags;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRgb
XCBRgb *
new(self,red,green,blue)
    char *self
    uint16_t red
    uint16_t green
    uint16_t blue
  PREINIT:
    XCBRgb *buf;
  CODE:
    New(0, buf, 1, XCBRgb);
    buf->red = red;
    buf->green = green;
    buf->blue = blue;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRgbPtr

uint16_t
red(self)
    XCBRgb * self
  CODE:
    RETVAL = self->red;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRgbPtr

uint16_t
green(self)
    XCBRgb * self
  CODE:
    RETVAL = self->green;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBRgbPtr

uint16_t
blue(self)
    XCBRgb * self
  CODE:
    RETVAL = self->blue;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBHost
XCBHost *
new(self,family,address_len)
    char *self
    uint8_t family
    uint16_t address_len
  PREINIT:
    XCBHost *buf;
  CODE:
    New(0, buf, 1, XCBHost);
    buf->family = family;
    buf->address_len = address_len;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = X11::XCB
HV *
create_window(conn,depth,wid,parent,x,y,width,height,border_width,class,visual,value_mask,value_list,...)
    XCBConnection *conn
    uint8_t depth
    uint32_t wid
    uint32_t parent
    uint16_t x
    uint16_t y
    uint16_t width
    uint16_t height
    uint16_t border_width
    uint16_t class
    uint32_t visual
    uint32_t value_mask
    intArray * value_list
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_create_window(conn, depth, wid, parent, x, y, width, height, border_width, class, visual, value_mask, value_list);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(value_list);
  OUTPUT:
    RETVAL

HV *
change_window_attributes(conn,window,value_mask,value_list,...)
    XCBConnection *conn
    uint32_t window
    uint32_t value_mask
    intArray * value_list
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_window_attributes(conn, window, value_mask, value_list);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(value_list);
  OUTPUT:
    RETVAL

HV *
get_window_attributes(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_get_window_attributes_cookie_t cookie;
  CODE:
    cookie = xcb_get_window_attributes(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
destroy_window(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_destroy_window(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
destroy_subwindows(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_destroy_subwindows(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
change_save_set(conn,mode,window)
    XCBConnection *conn
    uint8_t mode
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_save_set(conn, mode, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
reparent_window(conn,window,parent,x,y)
    XCBConnection *conn
    uint32_t window
    uint32_t parent
    uint16_t x
    uint16_t y
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_reparent_window(conn, window, parent, x, y);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
map_window(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_map_window(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
map_subwindows(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_map_subwindows(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
unmap_window(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_unmap_window(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
unmap_subwindows(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_unmap_subwindows(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
configure_window(conn,window,value_mask,value_list,...)
    XCBConnection *conn
    uint32_t window
    uint16_t value_mask
    intArray * value_list
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_configure_window(conn, window, value_mask, value_list);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(value_list);
  OUTPUT:
    RETVAL

HV *
circulate_window(conn,direction,window)
    XCBConnection *conn
    uint8_t direction
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_circulate_window(conn, direction, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_geometry(conn,drawable)
    XCBConnection *conn
    uint32_t drawable
  PREINIT:
    HV * hash;
    xcb_get_geometry_cookie_t cookie;
  CODE:
    cookie = xcb_get_geometry(conn, drawable);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_tree(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_query_tree_cookie_t cookie;
  CODE:
    cookie = xcb_query_tree(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
intern_atom(conn,only_if_exists,name_len,name)
    XCBConnection *conn
    int only_if_exists
    uint16_t name_len
    char * name
  PREINIT:
    HV * hash;
    xcb_intern_atom_cookie_t cookie;
  CODE:
    cookie = xcb_intern_atom(conn, only_if_exists, name_len, name);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_atom_name(conn,atom)
    XCBConnection *conn
    uint32_t atom
  PREINIT:
    HV * hash;
    xcb_get_atom_name_cookie_t cookie;
  CODE:
    cookie = xcb_get_atom_name(conn, atom);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
change_property(conn,mode,window,property,type,format,data_len,data)
    XCBConnection *conn
    uint8_t mode
    uint32_t window
    uint32_t property
    uint32_t type
    uint8_t format
    uint32_t data_len
    char * data
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_property(conn, mode, window, property, type, format, data_len, data);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
delete_property(conn,window,property)
    XCBConnection *conn
    uint32_t window
    uint32_t property
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_delete_property(conn, window, property);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_property(conn,delete,window,property,type,long_offset,long_length)
    XCBConnection *conn
    int delete
    uint32_t window
    uint32_t property
    uint32_t type
    uint32_t long_offset
    uint32_t long_length
  PREINIT:
    HV * hash;
    xcb_get_property_cookie_t cookie;
  CODE:
    cookie = xcb_get_property(conn, delete, window, property, type, long_offset, long_length);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
list_properties(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_list_properties_cookie_t cookie;
  CODE:
    cookie = xcb_list_properties(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_selection_owner(conn,owner,selection,time)
    XCBConnection *conn
    uint32_t owner
    uint32_t selection
    uint32_t time
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_selection_owner(conn, owner, selection, time);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_selection_owner(conn,selection)
    XCBConnection *conn
    uint32_t selection
  PREINIT:
    HV * hash;
    xcb_get_selection_owner_cookie_t cookie;
  CODE:
    cookie = xcb_get_selection_owner(conn, selection);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
convert_selection(conn,requestor,selection,target,property,time)
    XCBConnection *conn
    uint32_t requestor
    uint32_t selection
    uint32_t target
    uint32_t property
    uint32_t time
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_convert_selection(conn, requestor, selection, target, property, time);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
send_event(conn,propagate,destination,event_mask,event)
    XCBConnection *conn
    int propagate
    uint32_t destination
    uint32_t event_mask
    char * event
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_send_event(conn, propagate, destination, event_mask, event);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
grab_pointer(conn,owner_events,grab_window,event_mask,pointer_mode,keyboard_mode,confine_to,cursor,time)
    XCBConnection *conn
    int owner_events
    uint32_t grab_window
    uint16_t event_mask
    uint8_t pointer_mode
    uint8_t keyboard_mode
    uint32_t confine_to
    uint32_t cursor
    uint32_t time
  PREINIT:
    HV * hash;
    xcb_grab_pointer_cookie_t cookie;
  CODE:
    cookie = xcb_grab_pointer(conn, owner_events, grab_window, event_mask, pointer_mode, keyboard_mode, confine_to, cursor, time);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
ungrab_pointer(conn,time)
    XCBConnection *conn
    uint32_t time
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_ungrab_pointer(conn, time);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
grab_button(conn,owner_events,grab_window,event_mask,pointer_mode,keyboard_mode,confine_to,cursor,button,modifiers)
    XCBConnection *conn
    int owner_events
    uint32_t grab_window
    uint16_t event_mask
    uint8_t pointer_mode
    uint8_t keyboard_mode
    uint32_t confine_to
    uint32_t cursor
    uint8_t button
    uint16_t modifiers
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_grab_button(conn, owner_events, grab_window, event_mask, pointer_mode, keyboard_mode, confine_to, cursor, button, modifiers);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
ungrab_button(conn,button,grab_window,modifiers)
    XCBConnection *conn
    uint8_t button
    uint32_t grab_window
    uint16_t modifiers
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_ungrab_button(conn, button, grab_window, modifiers);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
change_active_pointer_grab(conn,cursor,time,event_mask)
    XCBConnection *conn
    uint32_t cursor
    uint32_t time
    uint16_t event_mask
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_active_pointer_grab(conn, cursor, time, event_mask);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
grab_keyboard(conn,owner_events,grab_window,time,pointer_mode,keyboard_mode)
    XCBConnection *conn
    int owner_events
    uint32_t grab_window
    uint32_t time
    uint8_t pointer_mode
    uint8_t keyboard_mode
  PREINIT:
    HV * hash;
    xcb_grab_keyboard_cookie_t cookie;
  CODE:
    cookie = xcb_grab_keyboard(conn, owner_events, grab_window, time, pointer_mode, keyboard_mode);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
ungrab_keyboard(conn,time)
    XCBConnection *conn
    uint32_t time
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_ungrab_keyboard(conn, time);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
grab_key(conn,owner_events,grab_window,modifiers,key,pointer_mode,keyboard_mode)
    XCBConnection *conn
    int owner_events
    uint32_t grab_window
    uint16_t modifiers
    uint8_t key
    uint8_t pointer_mode
    uint8_t keyboard_mode
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_grab_key(conn, owner_events, grab_window, modifiers, key, pointer_mode, keyboard_mode);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
ungrab_key(conn,key,grab_window,modifiers)
    XCBConnection *conn
    uint8_t key
    uint32_t grab_window
    uint16_t modifiers
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_ungrab_key(conn, key, grab_window, modifiers);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
allow_events(conn,mode,time)
    XCBConnection *conn
    uint8_t mode
    uint32_t time
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_allow_events(conn, mode, time);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
grab_server(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_grab_server(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
ungrab_server(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_ungrab_server(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_pointer(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_query_pointer_cookie_t cookie;
  CODE:
    cookie = xcb_query_pointer(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_motion_events(conn,window,start,stop)
    XCBConnection *conn
    uint32_t window
    uint32_t start
    uint32_t stop
  PREINIT:
    HV * hash;
    xcb_get_motion_events_cookie_t cookie;
  CODE:
    cookie = xcb_get_motion_events(conn, window, start, stop);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
translate_coordinates(conn,src_window,dst_window,src_x,src_y)
    XCBConnection *conn
    uint32_t src_window
    uint32_t dst_window
    uint16_t src_x
    uint16_t src_y
  PREINIT:
    HV * hash;
    xcb_translate_coordinates_cookie_t cookie;
  CODE:
    cookie = xcb_translate_coordinates(conn, src_window, dst_window, src_x, src_y);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
warp_pointer(conn,src_window,dst_window,src_x,src_y,src_width,src_height,dst_x,dst_y)
    XCBConnection *conn
    uint32_t src_window
    uint32_t dst_window
    uint16_t src_x
    uint16_t src_y
    uint16_t src_width
    uint16_t src_height
    uint16_t dst_x
    uint16_t dst_y
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_warp_pointer(conn, src_window, dst_window, src_x, src_y, src_width, src_height, dst_x, dst_y);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_input_focus(conn,revert_to,focus,time)
    XCBConnection *conn
    uint8_t revert_to
    uint32_t focus
    uint32_t time
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_input_focus(conn, revert_to, focus, time);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_input_focus(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_get_input_focus_cookie_t cookie;
  CODE:
    cookie = xcb_get_input_focus(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_keymap(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_query_keymap_cookie_t cookie;
  CODE:
    cookie = xcb_query_keymap(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
open_font(conn,fid,name_len,name)
    XCBConnection *conn
    uint32_t fid
    uint16_t name_len
    char * name
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_open_font(conn, fid, name_len, name);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
close_font(conn,font)
    XCBConnection *conn
    uint32_t font
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_close_font(conn, font);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_font(conn,font)
    XCBConnection *conn
    uint32_t font
  PREINIT:
    HV * hash;
    xcb_query_font_cookie_t cookie;
  CODE:
    cookie = xcb_query_font(conn, font);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_text_extents(conn,font,string_len,string)
    XCBConnection *conn
    uint32_t font
    int string_len
    XCBChar2b * string
  PREINIT:
    HV * hash;
    xcb_query_text_extents_cookie_t cookie;
  CODE:
    cookie = xcb_query_text_extents(conn, font, string_len, string);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(string);
  OUTPUT:
    RETVAL

HV *
list_fonts(conn,max_names,pattern_len,pattern)
    XCBConnection *conn
    uint16_t max_names
    uint16_t pattern_len
    char * pattern
  PREINIT:
    HV * hash;
    xcb_list_fonts_cookie_t cookie;
  CODE:
    cookie = xcb_list_fonts(conn, max_names, pattern_len, pattern);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
list_fonts_with_info(conn,max_names,pattern_len,pattern)
    XCBConnection *conn
    uint16_t max_names
    uint16_t pattern_len
    char * pattern
  PREINIT:
    HV * hash;
    xcb_list_fonts_with_info_cookie_t cookie;
  CODE:
    cookie = xcb_list_fonts_with_info(conn, max_names, pattern_len, pattern);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_font_path(conn,font_qty,path_len,path)
    XCBConnection *conn
    uint16_t font_qty
    int path_len
    char * path
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_font_path(conn, font_qty, path_len, path);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_font_path(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_get_font_path_cookie_t cookie;
  CODE:
    cookie = xcb_get_font_path(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
create_pixmap(conn,depth,pid,drawable,width,height)
    XCBConnection *conn
    uint8_t depth
    uint32_t pid
    uint32_t drawable
    uint16_t width
    uint16_t height
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_create_pixmap(conn, depth, pid, drawable, width, height);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
free_pixmap(conn,pixmap)
    XCBConnection *conn
    uint32_t pixmap
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_free_pixmap(conn, pixmap);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
create_gc(conn,cid,drawable,value_mask,value_list,...)
    XCBConnection *conn
    uint32_t cid
    uint32_t drawable
    uint32_t value_mask
    intArray * value_list
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_create_gc(conn, cid, drawable, value_mask, value_list);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(value_list);
  OUTPUT:
    RETVAL

HV *
change_gc(conn,gc,value_mask,value_list,...)
    XCBConnection *conn
    uint32_t gc
    uint32_t value_mask
    intArray * value_list
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_gc(conn, gc, value_mask, value_list);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(value_list);
  OUTPUT:
    RETVAL

HV *
copy_gc(conn,src_gc,dst_gc,value_mask)
    XCBConnection *conn
    uint32_t src_gc
    uint32_t dst_gc
    uint32_t value_mask
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_copy_gc(conn, src_gc, dst_gc, value_mask);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_dashes(conn,gc,dash_offset,dashes_len,dashes)
    XCBConnection *conn
    uint32_t gc
    uint16_t dash_offset
    uint16_t dashes_len
    intArray * dashes
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_dashes(conn, gc, dash_offset, dashes_len,  (const uint8_t*)dashes);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(dashes);
  OUTPUT:
    RETVAL

HV *
set_clip_rectangles(conn,ordering,gc,clip_x_origin,clip_y_origin,rectangles_len,rectangles)
    XCBConnection *conn
    uint8_t ordering
    uint32_t gc
    uint16_t clip_x_origin
    uint16_t clip_y_origin
    int rectangles_len
    XCBRectangle * rectangles
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_clip_rectangles(conn, ordering, gc, clip_x_origin, clip_y_origin, rectangles_len, rectangles);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(rectangles);
  OUTPUT:
    RETVAL

HV *
free_gc(conn,gc)
    XCBConnection *conn
    uint32_t gc
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_free_gc(conn, gc);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
clear_area(conn,exposures,window,x,y,width,height)
    XCBConnection *conn
    int exposures
    uint32_t window
    uint16_t x
    uint16_t y
    uint16_t width
    uint16_t height
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_clear_area(conn, exposures, window, x, y, width, height);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
copy_area(conn,src_drawable,dst_drawable,gc,src_x,src_y,dst_x,dst_y,width,height)
    XCBConnection *conn
    uint32_t src_drawable
    uint32_t dst_drawable
    uint32_t gc
    uint16_t src_x
    uint16_t src_y
    uint16_t dst_x
    uint16_t dst_y
    uint16_t width
    uint16_t height
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_copy_area(conn, src_drawable, dst_drawable, gc, src_x, src_y, dst_x, dst_y, width, height);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
copy_plane(conn,src_drawable,dst_drawable,gc,src_x,src_y,dst_x,dst_y,width,height,bit_plane)
    XCBConnection *conn
    uint32_t src_drawable
    uint32_t dst_drawable
    uint32_t gc
    uint16_t src_x
    uint16_t src_y
    uint16_t dst_x
    uint16_t dst_y
    uint16_t width
    uint16_t height
    uint32_t bit_plane
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_copy_plane(conn, src_drawable, dst_drawable, gc, src_x, src_y, dst_x, dst_y, width, height, bit_plane);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
poly_point(conn,coordinate_mode,drawable,gc,points_len,points)
    XCBConnection *conn
    uint8_t coordinate_mode
    uint32_t drawable
    uint32_t gc
    int points_len
    XCBPoint * points
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_point(conn, coordinate_mode, drawable, gc, points_len, points);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(points);
  OUTPUT:
    RETVAL

HV *
poly_line(conn,coordinate_mode,drawable,gc,points_len,points)
    XCBConnection *conn
    uint8_t coordinate_mode
    uint32_t drawable
    uint32_t gc
    int points_len
    XCBPoint * points
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_line(conn, coordinate_mode, drawable, gc, points_len, points);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(points);
  OUTPUT:
    RETVAL

HV *
poly_segment(conn,drawable,gc,segments_len,segments)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    int segments_len
    XCBSegment * segments
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_segment(conn, drawable, gc, segments_len, segments);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(segments);
  OUTPUT:
    RETVAL

HV *
poly_rectangle(conn,drawable,gc,rectangles_len,rectangles)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    int rectangles_len
    XCBRectangle * rectangles
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_rectangle(conn, drawable, gc, rectangles_len, rectangles);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(rectangles);
  OUTPUT:
    RETVAL

HV *
poly_arc(conn,drawable,gc,arcs_len,arcs)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    int arcs_len
    XCBArc * arcs
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_arc(conn, drawable, gc, arcs_len, arcs);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(arcs);
  OUTPUT:
    RETVAL

HV *
fill_poly(conn,drawable,gc,shape,coordinate_mode,points_len,points)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    uint8_t shape
    uint8_t coordinate_mode
    int points_len
    XCBPoint * points
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_fill_poly(conn, drawable, gc, shape, coordinate_mode, points_len, points);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(points);
  OUTPUT:
    RETVAL

HV *
poly_fill_rectangle(conn,drawable,gc,rectangles_len,rectangles)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    int rectangles_len
    XCBRectangle * rectangles
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_fill_rectangle(conn, drawable, gc, rectangles_len, rectangles);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(rectangles);
  OUTPUT:
    RETVAL

HV *
poly_fill_arc(conn,drawable,gc,arcs_len,arcs)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    int arcs_len
    XCBArc * arcs
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_fill_arc(conn, drawable, gc, arcs_len, arcs);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(arcs);
  OUTPUT:
    RETVAL

HV *
put_image(conn,format,drawable,gc,width,height,dst_x,dst_y,left_pad,depth,data_len,data)
    XCBConnection *conn
    uint8_t format
    uint32_t drawable
    uint32_t gc
    uint16_t width
    uint16_t height
    uint16_t dst_x
    uint16_t dst_y
    uint8_t left_pad
    uint8_t depth
    int data_len
    intArray * data
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_put_image(conn, format, drawable, gc, width, height, dst_x, dst_y, left_pad, depth, data_len,  (const uint8_t*)data);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(data);
  OUTPUT:
    RETVAL

HV *
get_image(conn,format,drawable,x,y,width,height,plane_mask)
    XCBConnection *conn
    uint8_t format
    uint32_t drawable
    uint16_t x
    uint16_t y
    uint16_t width
    uint16_t height
    uint32_t plane_mask
  PREINIT:
    HV * hash;
    xcb_get_image_cookie_t cookie;
  CODE:
    cookie = xcb_get_image(conn, format, drawable, x, y, width, height, plane_mask);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
poly_text_8(conn,drawable,gc,x,y,items__len,items_)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    uint16_t x
    uint16_t y
    int items__len
    intArray * items_
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_text_8(conn, drawable, gc, x, y, items__len,  (const uint8_t*)items_);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(items_);
  OUTPUT:
    RETVAL

HV *
poly_text_16(conn,drawable,gc,x,y,items__len,items_)
    XCBConnection *conn
    uint32_t drawable
    uint32_t gc
    uint16_t x
    uint16_t y
    int items__len
    intArray * items_
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_poly_text_16(conn, drawable, gc, x, y, items__len,  (const uint8_t*)items_);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(items_);
  OUTPUT:
    RETVAL

HV *
image_text_8(conn,string_len,drawable,gc,x,y,string)
    XCBConnection *conn
    uint8_t string_len
    uint32_t drawable
    uint32_t gc
    uint16_t x
    uint16_t y
    char * string
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_image_text_8(conn, string_len, drawable, gc, x, y, string);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
image_text_16(conn,string_len,drawable,gc,x,y,string)
    XCBConnection *conn
    uint8_t string_len
    uint32_t drawable
    uint32_t gc
    uint16_t x
    uint16_t y
    XCBChar2b * string
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_image_text_16(conn, string_len, drawable, gc, x, y, string);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(string);
  OUTPUT:
    RETVAL

HV *
create_colormap(conn,alloc,mid,window,visual)
    XCBConnection *conn
    uint8_t alloc
    uint32_t mid
    uint32_t window
    uint32_t visual
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_create_colormap(conn, alloc, mid, window, visual);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
free_colormap(conn,cmap)
    XCBConnection *conn
    uint32_t cmap
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_free_colormap(conn, cmap);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
copy_colormap_and_free(conn,mid,src_cmap)
    XCBConnection *conn
    uint32_t mid
    uint32_t src_cmap
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_copy_colormap_and_free(conn, mid, src_cmap);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
install_colormap(conn,cmap)
    XCBConnection *conn
    uint32_t cmap
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_install_colormap(conn, cmap);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
uninstall_colormap(conn,cmap)
    XCBConnection *conn
    uint32_t cmap
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_uninstall_colormap(conn, cmap);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
list_installed_colormaps(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_list_installed_colormaps_cookie_t cookie;
  CODE:
    cookie = xcb_list_installed_colormaps(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
alloc_color(conn,cmap,red,green,blue)
    XCBConnection *conn
    uint32_t cmap
    uint16_t red
    uint16_t green
    uint16_t blue
  PREINIT:
    HV * hash;
    xcb_alloc_color_cookie_t cookie;
  CODE:
    cookie = xcb_alloc_color(conn, cmap, red, green, blue);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
alloc_named_color(conn,cmap,name_len,name)
    XCBConnection *conn
    uint32_t cmap
    uint16_t name_len
    char * name
  PREINIT:
    HV * hash;
    xcb_alloc_named_color_cookie_t cookie;
  CODE:
    cookie = xcb_alloc_named_color(conn, cmap, name_len, name);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
alloc_color_cells(conn,contiguous,cmap,colors,planes)
    XCBConnection *conn
    int contiguous
    uint32_t cmap
    uint16_t colors
    uint16_t planes
  PREINIT:
    HV * hash;
    xcb_alloc_color_cells_cookie_t cookie;
  CODE:
    cookie = xcb_alloc_color_cells(conn, contiguous, cmap, colors, planes);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
alloc_color_planes(conn,contiguous,cmap,colors,reds,greens,blues)
    XCBConnection *conn
    int contiguous
    uint32_t cmap
    uint16_t colors
    uint16_t reds
    uint16_t greens
    uint16_t blues
  PREINIT:
    HV * hash;
    xcb_alloc_color_planes_cookie_t cookie;
  CODE:
    cookie = xcb_alloc_color_planes(conn, contiguous, cmap, colors, reds, greens, blues);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
free_colors(conn,cmap,plane_mask,pixels_len,pixels)
    XCBConnection *conn
    uint32_t cmap
    uint32_t plane_mask
    int pixels_len
    intArray * pixels
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_free_colors(conn, cmap, plane_mask, pixels_len,  (const uint32_t*)pixels);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(pixels);
  OUTPUT:
    RETVAL

HV *
store_colors(conn,cmap,items__len,items_)
    XCBConnection *conn
    uint32_t cmap
    int items__len
    XCBColoritem * items_
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_store_colors(conn, cmap, items__len, items_);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(items_);
  OUTPUT:
    RETVAL

HV *
store_named_color(conn,flags,cmap,pixel,name_len,name)
    XCBConnection *conn
    uint8_t flags
    uint32_t cmap
    uint32_t pixel
    uint16_t name_len
    char * name
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_store_named_color(conn, flags, cmap, pixel, name_len, name);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_colors(conn,cmap,pixels_len,pixels)
    XCBConnection *conn
    uint32_t cmap
    int pixels_len
    intArray * pixels
  PREINIT:
    HV * hash;
    xcb_query_colors_cookie_t cookie;
  CODE:
    cookie = xcb_query_colors(conn, cmap, pixels_len,  (const uint32_t*)pixels);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(pixels);
  OUTPUT:
    RETVAL

HV *
lookup_color(conn,cmap,name_len,name)
    XCBConnection *conn
    uint32_t cmap
    uint16_t name_len
    char * name
  PREINIT:
    HV * hash;
    xcb_lookup_color_cookie_t cookie;
  CODE:
    cookie = xcb_lookup_color(conn, cmap, name_len, name);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
create_cursor(conn,cid,source,mask,fore_red,fore_green,fore_blue,back_red,back_green,back_blue,x,y)
    XCBConnection *conn
    uint32_t cid
    uint32_t source
    uint32_t mask
    uint16_t fore_red
    uint16_t fore_green
    uint16_t fore_blue
    uint16_t back_red
    uint16_t back_green
    uint16_t back_blue
    uint16_t x
    uint16_t y
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_create_cursor(conn, cid, source, mask, fore_red, fore_green, fore_blue, back_red, back_green, back_blue, x, y);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
create_glyph_cursor(conn,cid,source_font,mask_font,source_char,mask_char,fore_red,fore_green,fore_blue,back_red,back_green,back_blue)
    XCBConnection *conn
    uint32_t cid
    uint32_t source_font
    uint32_t mask_font
    uint16_t source_char
    uint16_t mask_char
    uint16_t fore_red
    uint16_t fore_green
    uint16_t fore_blue
    uint16_t back_red
    uint16_t back_green
    uint16_t back_blue
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_create_glyph_cursor(conn, cid, source_font, mask_font, source_char, mask_char, fore_red, fore_green, fore_blue, back_red, back_green, back_blue);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
free_cursor(conn,cursor)
    XCBConnection *conn
    uint32_t cursor
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_free_cursor(conn, cursor);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
recolor_cursor(conn,cursor,fore_red,fore_green,fore_blue,back_red,back_green,back_blue)
    XCBConnection *conn
    uint32_t cursor
    uint16_t fore_red
    uint16_t fore_green
    uint16_t fore_blue
    uint16_t back_red
    uint16_t back_green
    uint16_t back_blue
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_recolor_cursor(conn, cursor, fore_red, fore_green, fore_blue, back_red, back_green, back_blue);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_best_size(conn,class,drawable,width,height)
    XCBConnection *conn
    uint8_t class
    uint32_t drawable
    uint16_t width
    uint16_t height
  PREINIT:
    HV * hash;
    xcb_query_best_size_cookie_t cookie;
  CODE:
    cookie = xcb_query_best_size(conn, class, drawable, width, height);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
query_extension(conn,name_len,name)
    XCBConnection *conn
    uint16_t name_len
    char * name
  PREINIT:
    HV * hash;
    xcb_query_extension_cookie_t cookie;
  CODE:
    cookie = xcb_query_extension(conn, name_len, name);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
list_extensions(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_list_extensions_cookie_t cookie;
  CODE:
    cookie = xcb_list_extensions(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
change_keyboard_mapping(conn,keycode_count,first_keycode,keysyms_per_keycode,keysyms)
    XCBConnection *conn
    uint8_t keycode_count
    uint8_t first_keycode
    uint8_t keysyms_per_keycode
    intArray * keysyms
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_keyboard_mapping(conn, keycode_count, first_keycode, keysyms_per_keycode,  (const uint32_t*)keysyms);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(keysyms);
  OUTPUT:
    RETVAL

HV *
get_keyboard_mapping(conn,first_keycode,count)
    XCBConnection *conn
    uint8_t first_keycode
    uint8_t count
  PREINIT:
    HV * hash;
    xcb_get_keyboard_mapping_cookie_t cookie;
  CODE:
    cookie = xcb_get_keyboard_mapping(conn, first_keycode, count);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
change_keyboard_control(conn,value_mask,value_list,...)
    XCBConnection *conn
    uint32_t value_mask
    intArray * value_list
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_keyboard_control(conn, value_mask, value_list);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(value_list);
  OUTPUT:
    RETVAL

HV *
get_keyboard_control(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_get_keyboard_control_cookie_t cookie;
  CODE:
    cookie = xcb_get_keyboard_control(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
bell(conn,percent)
    XCBConnection *conn
    uint8_t percent
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_bell(conn, percent);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
change_pointer_control(conn,acceleration_numerator,acceleration_denominator,threshold,do_acceleration,do_threshold)
    XCBConnection *conn
    uint16_t acceleration_numerator
    uint16_t acceleration_denominator
    uint16_t threshold
    int do_acceleration
    int do_threshold
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_pointer_control(conn, acceleration_numerator, acceleration_denominator, threshold, do_acceleration, do_threshold);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_pointer_control(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_get_pointer_control_cookie_t cookie;
  CODE:
    cookie = xcb_get_pointer_control(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_screen_saver(conn,timeout,interval,prefer_blanking,allow_exposures)
    XCBConnection *conn
    uint16_t timeout
    uint16_t interval
    uint8_t prefer_blanking
    uint8_t allow_exposures
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_screen_saver(conn, timeout, interval, prefer_blanking, allow_exposures);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_screen_saver(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_get_screen_saver_cookie_t cookie;
  CODE:
    cookie = xcb_get_screen_saver(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
change_hosts(conn,mode,family,address_len,address)
    XCBConnection *conn
    uint8_t mode
    uint8_t family
    uint16_t address_len
    char * address
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_change_hosts(conn, mode, family, address_len, address);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
list_hosts(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_list_hosts_cookie_t cookie;
  CODE:
    cookie = xcb_list_hosts(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_access_control(conn,mode)
    XCBConnection *conn
    uint8_t mode
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_access_control(conn, mode);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_close_down_mode(conn,mode)
    XCBConnection *conn
    uint8_t mode
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_set_close_down_mode(conn, mode);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
kill_client(conn,resource)
    XCBConnection *conn
    uint32_t resource
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_kill_client(conn, resource);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
rotate_properties(conn,window,atoms_len,delta,atoms)
    XCBConnection *conn
    uint32_t window
    uint16_t atoms_len
    uint16_t delta
    intArray * atoms
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_rotate_properties(conn, window, atoms_len, delta,  (const uint32_t*)atoms);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(atoms);
  OUTPUT:
    RETVAL

HV *
force_screen_saver(conn,mode)
    XCBConnection *conn
    uint8_t mode
  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_force_screen_saver(conn, mode);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_pointer_mapping(conn,map_len,map)
    XCBConnection *conn
    uint8_t map_len
    intArray * map
  PREINIT:
    HV * hash;
    xcb_set_pointer_mapping_cookie_t cookie;
  CODE:
    cookie = xcb_set_pointer_mapping(conn, map_len,  (const uint8_t*)map);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(map);
  OUTPUT:
    RETVAL

HV *
get_pointer_mapping(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_get_pointer_mapping_cookie_t cookie;
  CODE:
    cookie = xcb_get_pointer_mapping(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
set_modifier_mapping(conn,keycodes_per_modifier,keycodes)
    XCBConnection *conn
    uint8_t keycodes_per_modifier
    intArray * keycodes
  PREINIT:
    HV * hash;
    xcb_set_modifier_mapping_cookie_t cookie;
  CODE:
    cookie = xcb_set_modifier_mapping(conn, keycodes_per_modifier,  (const uint8_t*)keycodes);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;
    free(keycodes);
  OUTPUT:
    RETVAL

HV *
get_modifier_mapping(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_get_modifier_mapping_cookie_t cookie;
  CODE:
    cookie = xcb_get_modifier_mapping(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
no_operation(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_void_cookie_t cookie;
  CODE:
    cookie = xcb_no_operation(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
get_window_attributes_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_window_attributes_cookie_t cookie;
    xcb_get_window_attributes_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_window_attributes_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_window_attributes_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "backing_store", strlen("backing_store"), newSViv(reply->backing_store), 0);
    hv_store(hash, "visual", strlen("visual"), newSViv(reply->visual), 0);
    hv_store(hash, "_class", strlen("_class"), newSViv(reply->_class), 0);
    hv_store(hash, "bit_gravity", strlen("bit_gravity"), newSViv(reply->bit_gravity), 0);
    hv_store(hash, "win_gravity", strlen("win_gravity"), newSViv(reply->win_gravity), 0);
    hv_store(hash, "backing_planes", strlen("backing_planes"), newSViv(reply->backing_planes), 0);
    hv_store(hash, "backing_pixel", strlen("backing_pixel"), newSViv(reply->backing_pixel), 0);
    hv_store(hash, "save_under", strlen("save_under"), newSViv(reply->save_under), 0);
    hv_store(hash, "map_is_installed", strlen("map_is_installed"), newSViv(reply->map_is_installed), 0);
    hv_store(hash, "map_state", strlen("map_state"), newSViv(reply->map_state), 0);
    hv_store(hash, "override_redirect", strlen("override_redirect"), newSViv(reply->override_redirect), 0);
    hv_store(hash, "colormap", strlen("colormap"), newSViv(reply->colormap), 0);
    hv_store(hash, "all_event_masks", strlen("all_event_masks"), newSViv(reply->all_event_masks), 0);
    hv_store(hash, "your_event_mask", strlen("your_event_mask"), newSViv(reply->your_event_mask), 0);
    hv_store(hash, "do_not_propagate_mask", strlen("do_not_propagate_mask"), newSViv(reply->do_not_propagate_mask), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_geometry_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_geometry_cookie_t cookie;
    xcb_get_geometry_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_geometry_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_geometry_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "depth", strlen("depth"), newSViv(reply->depth), 0);
    hv_store(hash, "root", strlen("root"), newSViv(reply->root), 0);
    hv_store(hash, "x", strlen("x"), newSViv(reply->x), 0);
    hv_store(hash, "y", strlen("y"), newSViv(reply->y), 0);
    hv_store(hash, "width", strlen("width"), newSViv(reply->width), 0);
    hv_store(hash, "height", strlen("height"), newSViv(reply->height), 0);
    hv_store(hash, "border_width", strlen("border_width"), newSViv(reply->border_width), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_tree_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_tree_cookie_t cookie;
    xcb_query_tree_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_tree_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_tree_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "root", strlen("root"), newSViv(reply->root), 0);
    hv_store(hash, "parent", strlen("parent"), newSViv(reply->parent), 0);
    hv_store(hash, "children_len", strlen("children_len"), newSViv(reply->children_len), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
intern_atom_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_intern_atom_cookie_t cookie;
    xcb_intern_atom_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_intern_atom_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_intern_atom_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "atom", strlen("atom"), newSViv(reply->atom), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_atom_name_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_atom_name_cookie_t cookie;
    xcb_get_atom_name_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_atom_name_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_atom_name_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "name_len", strlen("name_len"), newSViv(reply->name_len), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_property_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_property_cookie_t cookie;
    xcb_get_property_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_property_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_property_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "format", strlen("format"), newSViv(reply->format), 0);
    hv_store(hash, "type", strlen("type"), newSViv(reply->type), 0);
    hv_store(hash, "bytes_after", strlen("bytes_after"), newSViv(reply->bytes_after), 0);
    hv_store(hash, "value_len", strlen("value_len"), newSViv(reply->value_len), 0);
    _len = reply->value_len * (reply->format / 8);
    if (_len > 0)
        hv_store(hash, "value", strlen("value"), newSVpvn((const char*)(reply + 1), _len), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
list_properties_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_list_properties_cookie_t cookie;
    xcb_list_properties_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_list_properties_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_list_properties_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "atoms_len", strlen("atoms_len"), newSViv(reply->atoms_len), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_selection_owner_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_selection_owner_cookie_t cookie;
    xcb_get_selection_owner_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_selection_owner_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_selection_owner_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "owner", strlen("owner"), newSViv(reply->owner), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
grab_pointer_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_grab_pointer_cookie_t cookie;
    xcb_grab_pointer_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_grab_pointer_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_grab_pointer_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "status", strlen("status"), newSViv(reply->status), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
grab_keyboard_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_grab_keyboard_cookie_t cookie;
    xcb_grab_keyboard_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_grab_keyboard_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_grab_keyboard_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "status", strlen("status"), newSViv(reply->status), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_pointer_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_pointer_cookie_t cookie;
    xcb_query_pointer_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_pointer_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_pointer_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "same_screen", strlen("same_screen"), newSViv(reply->same_screen), 0);
    hv_store(hash, "root", strlen("root"), newSViv(reply->root), 0);
    hv_store(hash, "child", strlen("child"), newSViv(reply->child), 0);
    hv_store(hash, "root_x", strlen("root_x"), newSViv(reply->root_x), 0);
    hv_store(hash, "root_y", strlen("root_y"), newSViv(reply->root_y), 0);
    hv_store(hash, "win_x", strlen("win_x"), newSViv(reply->win_x), 0);
    hv_store(hash, "win_y", strlen("win_y"), newSViv(reply->win_y), 0);
    hv_store(hash, "mask", strlen("mask"), newSViv(reply->mask), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_motion_events_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_motion_events_cookie_t cookie;
    xcb_get_motion_events_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_motion_events_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_motion_events_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "events_len", strlen("events_len"), newSViv(reply->events_len), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_timecoord_iterator_t iterator = xcb_get_motion_events_events_iterator(reply);
    for (; iterator.rem > 0; xcb_timecoord_next(&iterator)) {
      xcb_timecoord_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "time", strlen("time"), newSViv(data->time), 0);
      hv_store(inner_hash, "x", strlen("x"), newSViv(data->x), 0);
      hv_store(inner_hash, "y", strlen("y"), newSViv(data->y), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "events", strlen("events"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
translate_coordinates_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_translate_coordinates_cookie_t cookie;
    xcb_translate_coordinates_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_translate_coordinates_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_translate_coordinates_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "same_screen", strlen("same_screen"), newSViv(reply->same_screen), 0);
    hv_store(hash, "child", strlen("child"), newSViv(reply->child), 0);
    hv_store(hash, "dst_x", strlen("dst_x"), newSViv(reply->dst_x), 0);
    hv_store(hash, "dst_y", strlen("dst_y"), newSViv(reply->dst_y), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_input_focus_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_input_focus_cookie_t cookie;
    xcb_get_input_focus_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_input_focus_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_input_focus_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "revert_to", strlen("revert_to"), newSViv(reply->revert_to), 0);
    hv_store(hash, "focus", strlen("focus"), newSViv(reply->focus), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_keymap_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_keymap_cookie_t cookie;
    xcb_query_keymap_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_keymap_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_keymap_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_font_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_font_cookie_t cookie;
    xcb_query_font_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_font_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_font_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    /* TODO: type xcb_charinfo_t, name min_bounds */
    /* TODO: type xcb_charinfo_t, name max_bounds */
    hv_store(hash, "min_char_or_byte2", strlen("min_char_or_byte2"), newSViv(reply->min_char_or_byte2), 0);
    hv_store(hash, "max_char_or_byte2", strlen("max_char_or_byte2"), newSViv(reply->max_char_or_byte2), 0);
    hv_store(hash, "default_char", strlen("default_char"), newSViv(reply->default_char), 0);
    hv_store(hash, "properties_len", strlen("properties_len"), newSViv(reply->properties_len), 0);
    hv_store(hash, "draw_direction", strlen("draw_direction"), newSViv(reply->draw_direction), 0);
    hv_store(hash, "min_byte1", strlen("min_byte1"), newSViv(reply->min_byte1), 0);
    hv_store(hash, "max_byte1", strlen("max_byte1"), newSViv(reply->max_byte1), 0);
    hv_store(hash, "all_chars_exist", strlen("all_chars_exist"), newSViv(reply->all_chars_exist), 0);
    hv_store(hash, "font_ascent", strlen("font_ascent"), newSViv(reply->font_ascent), 0);
    hv_store(hash, "font_descent", strlen("font_descent"), newSViv(reply->font_descent), 0);
    hv_store(hash, "char_infos_len", strlen("char_infos_len"), newSViv(reply->char_infos_len), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_fontprop_iterator_t iterator = xcb_query_font_properties_iterator(reply);
    for (; iterator.rem > 0; xcb_fontprop_next(&iterator)) {
      xcb_fontprop_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "name", strlen("name"), newSViv(data->name), 0);
      hv_store(inner_hash, "value", strlen("value"), newSViv(data->value), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "properties", strlen("properties"), newRV((SV*)alist), 0);
    }
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_charinfo_iterator_t iterator = xcb_query_font_char_infos_iterator(reply);
    for (; iterator.rem > 0; xcb_charinfo_next(&iterator)) {
      xcb_charinfo_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "left_side_bearing", strlen("left_side_bearing"), newSViv(data->left_side_bearing), 0);
      hv_store(inner_hash, "right_side_bearing", strlen("right_side_bearing"), newSViv(data->right_side_bearing), 0);
      hv_store(inner_hash, "character_width", strlen("character_width"), newSViv(data->character_width), 0);
      hv_store(inner_hash, "ascent", strlen("ascent"), newSViv(data->ascent), 0);
      hv_store(inner_hash, "descent", strlen("descent"), newSViv(data->descent), 0);
      hv_store(inner_hash, "attributes", strlen("attributes"), newSViv(data->attributes), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "char_infos", strlen("char_infos"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_text_extents_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_text_extents_cookie_t cookie;
    xcb_query_text_extents_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_text_extents_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_text_extents_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "draw_direction", strlen("draw_direction"), newSViv(reply->draw_direction), 0);
    hv_store(hash, "font_ascent", strlen("font_ascent"), newSViv(reply->font_ascent), 0);
    hv_store(hash, "font_descent", strlen("font_descent"), newSViv(reply->font_descent), 0);
    hv_store(hash, "overall_ascent", strlen("overall_ascent"), newSViv(reply->overall_ascent), 0);
    hv_store(hash, "overall_descent", strlen("overall_descent"), newSViv(reply->overall_descent), 0);
    hv_store(hash, "overall_width", strlen("overall_width"), newSViv(reply->overall_width), 0);
    hv_store(hash, "overall_left", strlen("overall_left"), newSViv(reply->overall_left), 0);
    hv_store(hash, "overall_right", strlen("overall_right"), newSViv(reply->overall_right), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
list_fonts_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_list_fonts_cookie_t cookie;
    xcb_list_fonts_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_list_fonts_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_list_fonts_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "names_len", strlen("names_len"), newSViv(reply->names_len), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_str_iterator_t iterator = xcb_list_fonts_names_iterator(reply);
    for (; iterator.rem > 0; xcb_str_next(&iterator)) {
      xcb_str_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "name_len", strlen("name_len"), newSViv(data->name_len), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "names", strlen("names"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
list_fonts_with_info_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_list_fonts_with_info_cookie_t cookie;
    xcb_list_fonts_with_info_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_list_fonts_with_info_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_list_fonts_with_info_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "name_len", strlen("name_len"), newSViv(reply->name_len), 0);
    /* TODO: type xcb_charinfo_t, name min_bounds */
    /* TODO: type xcb_charinfo_t, name max_bounds */
    hv_store(hash, "min_char_or_byte2", strlen("min_char_or_byte2"), newSViv(reply->min_char_or_byte2), 0);
    hv_store(hash, "max_char_or_byte2", strlen("max_char_or_byte2"), newSViv(reply->max_char_or_byte2), 0);
    hv_store(hash, "default_char", strlen("default_char"), newSViv(reply->default_char), 0);
    hv_store(hash, "properties_len", strlen("properties_len"), newSViv(reply->properties_len), 0);
    hv_store(hash, "draw_direction", strlen("draw_direction"), newSViv(reply->draw_direction), 0);
    hv_store(hash, "min_byte1", strlen("min_byte1"), newSViv(reply->min_byte1), 0);
    hv_store(hash, "max_byte1", strlen("max_byte1"), newSViv(reply->max_byte1), 0);
    hv_store(hash, "all_chars_exist", strlen("all_chars_exist"), newSViv(reply->all_chars_exist), 0);
    hv_store(hash, "font_ascent", strlen("font_ascent"), newSViv(reply->font_ascent), 0);
    hv_store(hash, "font_descent", strlen("font_descent"), newSViv(reply->font_descent), 0);
    hv_store(hash, "replies_hint", strlen("replies_hint"), newSViv(reply->replies_hint), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_fontprop_iterator_t iterator = xcb_list_fonts_with_info_properties_iterator(reply);
    for (; iterator.rem > 0; xcb_fontprop_next(&iterator)) {
      xcb_fontprop_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "name", strlen("name"), newSViv(data->name), 0);
      hv_store(inner_hash, "value", strlen("value"), newSViv(data->value), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "properties", strlen("properties"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_font_path_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_font_path_cookie_t cookie;
    xcb_get_font_path_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_font_path_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_font_path_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "path_len", strlen("path_len"), newSViv(reply->path_len), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_str_iterator_t iterator = xcb_get_font_path_path_iterator(reply);
    for (; iterator.rem > 0; xcb_str_next(&iterator)) {
      xcb_str_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "name_len", strlen("name_len"), newSViv(data->name_len), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "path", strlen("path"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_image_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_image_cookie_t cookie;
    xcb_get_image_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_image_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_image_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "depth", strlen("depth"), newSViv(reply->depth), 0);
    hv_store(hash, "visual", strlen("visual"), newSViv(reply->visual), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
list_installed_colormaps_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_list_installed_colormaps_cookie_t cookie;
    xcb_list_installed_colormaps_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_list_installed_colormaps_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_list_installed_colormaps_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "cmaps_len", strlen("cmaps_len"), newSViv(reply->cmaps_len), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
alloc_color_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_alloc_color_cookie_t cookie;
    xcb_alloc_color_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_alloc_color_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_alloc_color_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "red", strlen("red"), newSViv(reply->red), 0);
    hv_store(hash, "green", strlen("green"), newSViv(reply->green), 0);
    hv_store(hash, "blue", strlen("blue"), newSViv(reply->blue), 0);
    hv_store(hash, "pixel", strlen("pixel"), newSViv(reply->pixel), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
alloc_named_color_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_alloc_named_color_cookie_t cookie;
    xcb_alloc_named_color_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_alloc_named_color_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_alloc_named_color_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "pixel", strlen("pixel"), newSViv(reply->pixel), 0);
    hv_store(hash, "exact_red", strlen("exact_red"), newSViv(reply->exact_red), 0);
    hv_store(hash, "exact_green", strlen("exact_green"), newSViv(reply->exact_green), 0);
    hv_store(hash, "exact_blue", strlen("exact_blue"), newSViv(reply->exact_blue), 0);
    hv_store(hash, "visual_red", strlen("visual_red"), newSViv(reply->visual_red), 0);
    hv_store(hash, "visual_green", strlen("visual_green"), newSViv(reply->visual_green), 0);
    hv_store(hash, "visual_blue", strlen("visual_blue"), newSViv(reply->visual_blue), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
alloc_color_cells_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_alloc_color_cells_cookie_t cookie;
    xcb_alloc_color_cells_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_alloc_color_cells_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_alloc_color_cells_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "pixels_len", strlen("pixels_len"), newSViv(reply->pixels_len), 0);
    hv_store(hash, "masks_len", strlen("masks_len"), newSViv(reply->masks_len), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
alloc_color_planes_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_alloc_color_planes_cookie_t cookie;
    xcb_alloc_color_planes_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_alloc_color_planes_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_alloc_color_planes_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "pixels_len", strlen("pixels_len"), newSViv(reply->pixels_len), 0);
    hv_store(hash, "red_mask", strlen("red_mask"), newSViv(reply->red_mask), 0);
    hv_store(hash, "green_mask", strlen("green_mask"), newSViv(reply->green_mask), 0);
    hv_store(hash, "blue_mask", strlen("blue_mask"), newSViv(reply->blue_mask), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_colors_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_colors_cookie_t cookie;
    xcb_query_colors_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_colors_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_colors_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "colors_len", strlen("colors_len"), newSViv(reply->colors_len), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_rgb_iterator_t iterator = xcb_query_colors_colors_iterator(reply);
    for (; iterator.rem > 0; xcb_rgb_next(&iterator)) {
      xcb_rgb_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "red", strlen("red"), newSViv(data->red), 0);
      hv_store(inner_hash, "green", strlen("green"), newSViv(data->green), 0);
      hv_store(inner_hash, "blue", strlen("blue"), newSViv(data->blue), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "colors", strlen("colors"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
lookup_color_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_lookup_color_cookie_t cookie;
    xcb_lookup_color_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_lookup_color_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_lookup_color_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "exact_red", strlen("exact_red"), newSViv(reply->exact_red), 0);
    hv_store(hash, "exact_green", strlen("exact_green"), newSViv(reply->exact_green), 0);
    hv_store(hash, "exact_blue", strlen("exact_blue"), newSViv(reply->exact_blue), 0);
    hv_store(hash, "visual_red", strlen("visual_red"), newSViv(reply->visual_red), 0);
    hv_store(hash, "visual_green", strlen("visual_green"), newSViv(reply->visual_green), 0);
    hv_store(hash, "visual_blue", strlen("visual_blue"), newSViv(reply->visual_blue), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_best_size_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_best_size_cookie_t cookie;
    xcb_query_best_size_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_best_size_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_best_size_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "width", strlen("width"), newSViv(reply->width), 0);
    hv_store(hash, "height", strlen("height"), newSViv(reply->height), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
query_extension_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_query_extension_cookie_t cookie;
    xcb_query_extension_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_query_extension_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_query_extension_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "present", strlen("present"), newSViv(reply->present), 0);
    hv_store(hash, "major_opcode", strlen("major_opcode"), newSViv(reply->major_opcode), 0);
    hv_store(hash, "first_event", strlen("first_event"), newSViv(reply->first_event), 0);
    hv_store(hash, "first_error", strlen("first_error"), newSViv(reply->first_error), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
list_extensions_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_list_extensions_cookie_t cookie;
    xcb_list_extensions_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_list_extensions_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_list_extensions_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "names_len", strlen("names_len"), newSViv(reply->names_len), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_str_iterator_t iterator = xcb_list_extensions_names_iterator(reply);
    for (; iterator.rem > 0; xcb_str_next(&iterator)) {
      xcb_str_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "name_len", strlen("name_len"), newSViv(data->name_len), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "names", strlen("names"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_keyboard_mapping_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_keyboard_mapping_cookie_t cookie;
    xcb_get_keyboard_mapping_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_keyboard_mapping_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_keyboard_mapping_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "keysyms_per_keycode", strlen("keysyms_per_keycode"), newSViv(reply->keysyms_per_keycode), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_keyboard_control_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_keyboard_control_cookie_t cookie;
    xcb_get_keyboard_control_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_keyboard_control_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_keyboard_control_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "global_auto_repeat", strlen("global_auto_repeat"), newSViv(reply->global_auto_repeat), 0);
    hv_store(hash, "led_mask", strlen("led_mask"), newSViv(reply->led_mask), 0);
    hv_store(hash, "key_click_percent", strlen("key_click_percent"), newSViv(reply->key_click_percent), 0);
    hv_store(hash, "bell_percent", strlen("bell_percent"), newSViv(reply->bell_percent), 0);
    hv_store(hash, "bell_pitch", strlen("bell_pitch"), newSViv(reply->bell_pitch), 0);
    hv_store(hash, "bell_duration", strlen("bell_duration"), newSViv(reply->bell_duration), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_pointer_control_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_pointer_control_cookie_t cookie;
    xcb_get_pointer_control_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_pointer_control_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_pointer_control_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "acceleration_numerator", strlen("acceleration_numerator"), newSViv(reply->acceleration_numerator), 0);
    hv_store(hash, "acceleration_denominator", strlen("acceleration_denominator"), newSViv(reply->acceleration_denominator), 0);
    hv_store(hash, "threshold", strlen("threshold"), newSViv(reply->threshold), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_screen_saver_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_screen_saver_cookie_t cookie;
    xcb_get_screen_saver_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_screen_saver_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_screen_saver_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "timeout", strlen("timeout"), newSViv(reply->timeout), 0);
    hv_store(hash, "interval", strlen("interval"), newSViv(reply->interval), 0);
    hv_store(hash, "prefer_blanking", strlen("prefer_blanking"), newSViv(reply->prefer_blanking), 0);
    hv_store(hash, "allow_exposures", strlen("allow_exposures"), newSViv(reply->allow_exposures), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
list_hosts_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_list_hosts_cookie_t cookie;
    xcb_list_hosts_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_list_hosts_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_list_hosts_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "mode", strlen("mode"), newSViv(reply->mode), 0);
    hv_store(hash, "hosts_len", strlen("hosts_len"), newSViv(reply->hosts_len), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_host_iterator_t iterator = xcb_list_hosts_hosts_iterator(reply);
    for (; iterator.rem > 0; xcb_host_next(&iterator)) {
      xcb_host_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "family", strlen("family"), newSViv(data->family), 0);
      hv_store(inner_hash, "address_len", strlen("address_len"), newSViv(data->address_len), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "hosts", strlen("hosts"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
set_pointer_mapping_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_set_pointer_mapping_cookie_t cookie;
    xcb_set_pointer_mapping_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_set_pointer_mapping_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_set_pointer_mapping_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "status", strlen("status"), newSViv(reply->status), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_pointer_mapping_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_pointer_mapping_cookie_t cookie;
    xcb_get_pointer_mapping_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_pointer_mapping_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_pointer_mapping_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "map_len", strlen("map_len"), newSViv(reply->map_len), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
set_modifier_mapping_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_set_modifier_mapping_cookie_t cookie;
    xcb_set_modifier_mapping_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_set_modifier_mapping_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_set_modifier_mapping_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "status", strlen("status"), newSViv(reply->status), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
get_modifier_mapping_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_get_modifier_mapping_cookie_t cookie;
    xcb_get_modifier_mapping_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_get_modifier_mapping_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_get_modifier_mapping_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "keycodes_per_modifier", strlen("keycodes_per_modifier"), newSViv(reply->keycodes_per_modifier), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBXinerama_screen_info
XCBXinerama_screen_info *
new(self,x_org,y_org,width,height)
    char *self
    uint16_t x_org
    uint16_t y_org
    uint16_t width
    uint16_t height
  PREINIT:
    XCBXinerama_screen_info *buf;
  CODE:
    New(0, buf, 1, XCBXinerama_screen_info);
    buf->x_org = x_org;
    buf->y_org = y_org;
    buf->width = width;
    buf->height = height;
    RETVAL = buf;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBXinerama_screen_infoPtr

uint16_t
x_org(self)
    XCBXinerama_screen_info * self
  CODE:
    RETVAL = self->x_org;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBXinerama_screen_infoPtr

uint16_t
y_org(self)
    XCBXinerama_screen_info * self
  CODE:
    RETVAL = self->y_org;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBXinerama_screen_infoPtr

uint16_t
width(self)
    XCBXinerama_screen_info * self
  CODE:
    RETVAL = self->width;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = XCBXinerama_screen_infoPtr

uint16_t
height(self)
    XCBXinerama_screen_info * self
  CODE:
    RETVAL = self->height;
  OUTPUT:
    RETVAL

MODULE = X11::XCB PACKAGE = X11::XCB
HV *
xinerama_query_version(conn,major,minor)
    XCBConnection *conn
    uint8_t major
    uint8_t minor
  PREINIT:
    HV * hash;
    xcb_xinerama_query_version_cookie_t cookie;
  CODE:
    cookie = xcb_xinerama_query_version(conn, major, minor);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
xinerama_get_state(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_xinerama_get_state_cookie_t cookie;
  CODE:
    cookie = xcb_xinerama_get_state(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
xinerama_get_screen_count(conn,window)
    XCBConnection *conn
    uint32_t window
  PREINIT:
    HV * hash;
    xcb_xinerama_get_screen_count_cookie_t cookie;
  CODE:
    cookie = xcb_xinerama_get_screen_count(conn, window);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
xinerama_get_screen_size(conn,window,screen)
    XCBConnection *conn
    uint32_t window
    uint32_t screen
  PREINIT:
    HV * hash;
    xcb_xinerama_get_screen_size_cookie_t cookie;
  CODE:
    cookie = xcb_xinerama_get_screen_size(conn, window, screen);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
xinerama_is_active(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_xinerama_is_active_cookie_t cookie;
  CODE:
    cookie = xcb_xinerama_is_active(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
xinerama_query_screens(conn)
    XCBConnection *conn

  PREINIT:
    HV * hash;
    xcb_xinerama_query_screens_cookie_t cookie;
  CODE:
    cookie = xcb_xinerama_query_screens(conn);

    hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(cookie.sequence), 0);
    RETVAL = hash;

  OUTPUT:
    RETVAL

HV *
xinerama_query_version_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_xinerama_query_version_cookie_t cookie;
    xcb_xinerama_query_version_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_xinerama_query_version_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_xinerama_query_version_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "major", strlen("major"), newSViv(reply->major), 0);
    hv_store(hash, "minor", strlen("minor"), newSViv(reply->minor), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
xinerama_get_state_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_xinerama_get_state_cookie_t cookie;
    xcb_xinerama_get_state_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_xinerama_get_state_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_xinerama_get_state_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "state", strlen("state"), newSViv(reply->state), 0);
    hv_store(hash, "window", strlen("window"), newSViv(reply->window), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
xinerama_get_screen_count_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_xinerama_get_screen_count_cookie_t cookie;
    xcb_xinerama_get_screen_count_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_xinerama_get_screen_count_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_xinerama_get_screen_count_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "screen_count", strlen("screen_count"), newSViv(reply->screen_count), 0);
    hv_store(hash, "window", strlen("window"), newSViv(reply->window), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
xinerama_get_screen_size_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_xinerama_get_screen_size_cookie_t cookie;
    xcb_xinerama_get_screen_size_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_xinerama_get_screen_size_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_xinerama_get_screen_size_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "width", strlen("width"), newSViv(reply->width), 0);
    hv_store(hash, "height", strlen("height"), newSViv(reply->height), 0);
    hv_store(hash, "window", strlen("window"), newSViv(reply->window), 0);
    hv_store(hash, "screen", strlen("screen"), newSViv(reply->screen), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
xinerama_is_active_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_xinerama_is_active_cookie_t cookie;
    xcb_xinerama_is_active_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_xinerama_is_active_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_xinerama_is_active_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "state", strlen("state"), newSViv(reply->state), 0);
    RETVAL = hash;
  OUTPUT:
    RETVAL

HV *
xinerama_query_screens_reply(conn,sequence)
    XCBConnection *conn
    int sequence
  PREINIT:
    HV * hash;
    HV * inner_hash;
    AV * alist;
    int c;
    int _len;
    xcb_xinerama_query_screens_cookie_t cookie;
    xcb_xinerama_query_screens_reply_t *reply;
  CODE:
    cookie.sequence = sequence;
    reply = xcb_xinerama_query_screens_reply(conn, cookie, NULL);
    if (!reply) croak("Could not get reply for: xcb_xinerama_query_screens_reply");     hash = newHV();
    hv_store(hash, "sequence", strlen("sequence"), newSViv(reply->sequence), 0);
    hv_store(hash, "length", strlen("length"), newSViv(reply->length), 0);
    hv_store(hash, "number", strlen("number"), newSViv(reply->number), 0);
    {
    /* Handling list part of the reply */
    alist = newAV();
    xcb_xinerama_screen_info_iterator_t iterator = xcb_xinerama_query_screens_screen_info_iterator(reply);
    for (; iterator.rem > 0; xcb_xinerama_screen_info_next(&iterator)) {
      xcb_xinerama_screen_info_t *data = iterator.data;
      inner_hash = newHV();
      hv_store(inner_hash, "x_org", strlen("x_org"), newSViv(data->x_org), 0);
      hv_store(inner_hash, "y_org", strlen("y_org"), newSViv(data->y_org), 0);
      hv_store(inner_hash, "width", strlen("width"), newSViv(data->width), 0);
      hv_store(inner_hash, "height", strlen("height"), newSViv(data->height), 0);
      av_push(alist, newRV((SV*)inner_hash));
    }
    hv_store(hash, "screen_info", strlen("screen_info"), newRV((SV*)alist), 0);
    }
    RETVAL = hash;
  OUTPUT:
    RETVAL


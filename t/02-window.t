#!perl

use Test::More tests => 1;
use Test::Deep;
use X11::XCB::Rect;
use X11::XCB qw(:all);
use Data::Dumper;
use TryCatch;

BEGIN {
	use_ok('X11::XCB::Window') or BAIL_OUT('Unable to load X11::XCB::Atom');
}

X11::XCB::Connection->connect(':0');

# Create a floating window which is smaller than the minimum enforced size of i3
my $original_rect = X11::XCB::Rect->new(x => 0, y => 0, width => 30, height => 30);

my $window = X11::XCB::Window->new(
	class => WINDOW_CLASS_INPUT_OUTPUT,
	rect => $original_rect,
	background_color => 12632256,
	type => 'utility',
);

$window->create;
$window->map;

diag( "Testing X11::XCB, Perl $], $^X" );

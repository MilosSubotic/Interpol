
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#include "interpol.h"

#include "interpol_kitten.h"

///////////////////////////////////////////////////////////////////////////////


int main() {
	init_interpolator(0);

	tex_t t = create_texture(
		interpol_kitten.width,
		interpol_kitten.height,
		RGB888,
		interpol_kitten.pixel_data
	);

	clear();

	draw_tex(
		t,
		0, 0, interpol_kitten.width, interpol_kitten.height,
		200, 100, interpol_kitten.width*3.5, interpol_kitten.height*1.5
	);

	flush();

	delete_texture(t);

	return 0;
}

///////////////////////////////////////////////////////////////////////////////

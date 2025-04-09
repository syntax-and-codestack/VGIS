#include "vgis/png.h"

const char * png_type(png * p){
   p++;
   return "png";
};

void png_bits(png * p){
 p->bits = 64 * 64;
};

void png_pixels(png * p){
 p->pixels = 2048 * 2048;
};
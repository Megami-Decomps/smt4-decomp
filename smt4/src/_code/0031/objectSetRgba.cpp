#include "common.h"

extern "C" {

typedef struct Color {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u8 r;
    /* 0x9 */ u8 g;
    /* 0xA */ u8 b;
    /* 0xB */ u8 a;
} Color;

void objectSetRgba(Color *color, u8 r, u8 g, u8 b, u8 a)
{
    color->r = r;
    color->g = g;
    color->b = b;
    color->a = a;
}

} /* extern "C" */

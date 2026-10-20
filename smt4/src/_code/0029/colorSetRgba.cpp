#include "common.h"

extern "C" {

typedef struct Color {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 r;
    /* 0x5 */ u8 g;
    /* 0x6 */ u8 b;
    /* 0x7 */ u8 a;
    /* 0x8 */ u32 packed;
} Color;

/* Sets the four components and the packed RGBA word. */
void colorSetRgba(Color *color, u8 r, u8 g, u8 b, u8 a)
{
    color->r = r;
    color->g = g;
    color->b = b;
    color->a = a;
    color->packed = *(u32 *)&color->r;
}

} /* extern "C" */

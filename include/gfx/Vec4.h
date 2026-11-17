#ifndef GFX_VEC4_H
#define GFX_VEC4_H

#include "common.h"

/* Four floats: a position, direction or colour passed to the engine by value or by address. */
struct Vec4 {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
    /* 0xC */ f32 w;
};

#endif

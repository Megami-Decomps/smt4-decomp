#ifndef GFX_TEXTUREDQUAD_H
#define GFX_TEXTUREDQUAD_H

#include "common.h"

struct TexturedQuadVertex {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ u8 unk0C[8];
};
struct TexturedQuadParameters {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 halfWidth;
    /* 0x14 */ f32 halfHeight;
};
struct TexturedQuad {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TexturedQuadVertex *vertices;
    /* 0x08 */ u8 unk08[0x58];
    /* 0x60 */ TexturedQuadParameters *parameters;
};

static __inline void texturedQuadSetPosition(TexturedQuadVertex *vertex, f32 x, f32 y, f32 z)
{
    vertex->x = x;
    vertex->y = y;
    vertex->z = z;
}

#endif

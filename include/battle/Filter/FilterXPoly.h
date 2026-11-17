#ifndef BATTLE_FILTER_FILTER_X_POLY_H
#define BATTLE_FILTER_FILTER_X_POLY_H

#include "common.h"

/* The X polygon battle filter: its vertex ring, build parameters and the filter object that owns them. */
struct XPolyVertex {
    f32 x, y, z;
    f32 u, v;
};

struct XPolyParams {
    /* 0x00 */ s32 segments;
    /* 0x04 */ f32 radius;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ f32 centerU, centerV;
    /* 0x18 */ f32 oddU, oddV;
    /* 0x20 */ f32 evenU, evenV;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ u32 baseArgument;
};

struct XPolyFilter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ XPolyVertex *vertices;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u8 matrix[0x40];
    /* 0x58 */ f32 depth;
    /* 0x5C */ f32 scale;
    /* 0x60 */ XPolyParams *params;
    /* 0x64 */ void *indices;
};

#endif

#ifndef BATTLE_FILTER_FILTER_X_POLY_H
#define BATTLE_FILTER_FILTER_X_POLY_H

#include "common.h"
#include "shard/S1Mover.h"

/* The X polygon battle filter: its vertex ring, build parameters and the filter object that owns them. */
struct XPolyUv {
    f32 u, v;
};

struct XPolyVertex {
    /* 0x00 */ Vec3f position;
    /* 0x0C */ XPolyUv uv;
};

struct XPolyParams {
    /* 0x00 */ s32 segments;
    /* 0x04 */ f32 radius;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ XPolyUv centerUv;
    /* 0x18 */ XPolyUv oddUv;      /* rim vertices alternate between the two */
    /* 0x20 */ XPolyUv evenUv;
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

typedef char XPolyLayoutCheck[sizeof(XPolyVertex) == 0x14 && sizeof(XPolyParams) == 0x30 &&
    offsetof(XPolyParams, evenUv) == 0x20 && offsetof(XPolyFilter, params) == 0x60 ? 1 : -1];

#endif

#ifndef GFX_TRANSFORM_INTERPOLATION_H
#define GFX_TRANSFORM_INTERPOLATION_H
#include "common.h"
#include <stddef.h>

struct TransformInterpolation {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 flags;
    /* 0x24 */ u8 unk24[0x34];
    /* 0x58 */ f32 x;
    /* 0x5C */ f32 y;
    /* 0x60 */ f32 startX;
    /* 0x64 */ f32 startY;
    /* 0x68 */ f32 targetX;
    /* 0x6C */ f32 targetY;
    /* 0x70 */ f32 valueA;
    /* 0x74 */ f32 valueB;
    /* 0x78 */ f32 startA;
    /* 0x7C */ f32 startB;
    /* 0x80 */ f32 targetA;
    /* 0x84 */ f32 targetB;
    /* 0x88 */ s32 elapsed;
    /* 0x8C */ s32 duration;
};
typedef char TransformInterpolationLayoutCheck[sizeof(TransformInterpolation) == 0x90 &&
    offsetof(TransformInterpolation, flags) == 0x20 &&
    offsetof(TransformInterpolation, elapsed) == 0x88 ? 1 : -1];
#endif

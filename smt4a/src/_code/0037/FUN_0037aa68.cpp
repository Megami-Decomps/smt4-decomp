/* NON_MATCHING: retail hoists the 1.0f literal load before the null test and keeps the target in r5 and the color in r4 (swapped here); the white-color arm's moves are scheduled differently. */
#include "common.h"

extern "C" {

struct Color4 {
    f32 r, g, b, a;
};

/* A render target: color/depth buffer descriptors plus the size block at 0xC (width at 0x14, height at 0x18). */
struct RenderSize {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 width;
    /* 0x18 */ u32 height;
};

struct RenderTargetPair {
    /* 0x00 */ u32 color;
    /* 0x04 */ u32 depth;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ RenderSize *size;
};

void FUN_00154d68(u32 color, u32 depth, u32 width, u32 height);
void FUN_00154180(s32 x, s32 y, s32 width, s32 height);
void FUN_0037a99c(s32 a, s32 b, Color4 color);

/* Binds the render target, sets its viewport (clamped to 1023x1016) and clears it with `color` (white if NULL). */
void FUN_0037aa68(RenderTargetPair *target, const Color4 *color)
{
    s32 width;
    s32 height;

    FUN_00154d68(target->color, target->depth, target->size->width, target->size->height);
    width = target->size->width;
    height = target->size->height;
    if (width >= 0x400) {
        width = 0x3FF;
    }
    if (height > 0x3F8) {
        height = 0x3F8;
    }
    FUN_00154180(0, 0, width, height);
    if (color != NULL) {
        FUN_0037a99c(0, 7, *color);
        return;
    }
    Color4 white;
    white.r = 1.0f;
    white.g = 1.0f;
    white.b = 1.0f;
    white.a = 1.0f;
    FUN_0037a99c(0, 7, white);
}

} /* extern "C" */

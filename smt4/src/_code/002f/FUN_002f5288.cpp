/* NON_MATCHING: FUN_002f51bc's real contract (x, y, width, height, opacity floats) is now passed, registers match; retail hoists the mov r1,#7/mov r0,#0 argument setup above the null test and pools 1.0f before 0.0f. */
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

void FUN_0011a258(u32 color, u32 depth, u32 width, u32 height);
void FUN_002bc644(s32 x, s32 y, s32 width, s32 height);
void FUN_002f51bc(u32 mode, u32 flags, f32 x, f32 y, f32 width, f32 height, f32 opacity);

/* Binds the render target, sets its viewport (clamped to 1023x1016) and clears it with `color` (white if NULL). */
void FUN_002f5288(RenderTargetPair *target, const Color4 *color)
{
    s32 width;
    s32 height;

    FUN_0011a258(target->color, target->depth, target->size->width, target->size->height);
    width = target->size->width;
    height = target->size->height;
    if (width >= 0x400) {
        width = 0x3FF;
    }
    if (height > 0x3F8) {
        height = 0x3F8;
    }
    FUN_002bc644(0, 0, width, height);
    if (color != NULL) {
        FUN_002f51bc(0, 7, color->r, color->g, color->b, color->a, 0.0f);
        return;
    }
    FUN_002f51bc(0, 7, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f);
}

} /* extern "C" */

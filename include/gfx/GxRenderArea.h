/* The viewport and scissor states of a render target, and the functions that write their GPU commands. */
#ifndef GFX_GXRENDERAREA_H
#define GFX_GXRENDERAREA_H

#include "common.h"

/* A viewport rectangle. */
struct GxViewportState {
    /* 0x00 */ u32 x;
    /* 0x04 */ u32 y;
    /* 0x08 */ u32 width;
    /* 0x0C */ u32 height;
};

/* A scissor rectangle and the size of the render target it is clamped to. */
struct ScissorState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
    /* 0x0C */ s32 width;
    /* 0x10 */ s32 height;
    /* 0x14 */ s32 targetWidth;
    /* 0x18 */ s32 targetHeight;
};

extern "C" {
u32 *FUN_00501660(const GxViewportState *viewport, u32 *cursor);
u32 *FUN_005015b0(const ScissorState *scissor, u32 *command);
}

#endif

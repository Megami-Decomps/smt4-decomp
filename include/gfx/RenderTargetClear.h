#ifndef GFX_RENDER_TARGET_CLEAR_H
#define GFX_RENDER_TARGET_CLEAR_H

#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include <stddef.h>

struct RenderTargetClearSize {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 width;
    /* 0x18 */ u32 height;
};

struct RenderTargetClearBinding {
    /* 0x00 */ AsdGxRenderBuffer *color;
    /* 0x04 */ AsdGxRenderBuffer *depth;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ RenderTargetClearSize *size;
};

typedef char RenderTargetClearLayoutCheck[sizeof(AsdGxClearColor) == 0x10 &&
    offsetof(RenderTargetClearBinding, size) == 0xc &&
    offsetof(RenderTargetClearSize, width) == 0x14 &&
    offsetof(RenderTargetClearSize, height) == 0x18 ? 1 : -1];

enum {
    CLEAR_VIEWPORT_ORIGIN = 0,
    CLEAR_VIEWPORT_MAX_WIDTH = 1023,
    CLEAR_VIEWPORT_MAX_HEIGHT = 1016,
    CLEAR_DISPLAY_MODE = 0,
    CLEAR_DISPLAY_BUFFERS = 7
};

/* Fills the display with the RGBA colour, using the selected render mode and buffers. */
extern "C" void renderFillScreenColor(f32 red, f32 green, f32 blue, f32 alpha,
                                      u32 mode, u32 flags, f32 opacity);

#endif

#ifndef GFX_TEXTURE_DRAW_REQUEST_H
#define GFX_TEXTURE_DRAW_REQUEST_H

#include "common.h"
#include <stddef.h>

/* Parameters for drawing one texture-table entry. Optional rectangle and alignment fields
 * are read only when their corresponding draw flags are set. */
struct TextureDrawRequest {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
    /* 0x0C */ u32 transparency;
    /* 0x10 */ u32 transparencyOverride;
    /* 0x14 */ u32 sourceWidth;
    /* 0x18 */ u32 sourceHeight;
    /* 0x1C */ s32 top;
    /* 0x20 */ s32 bottom;
    /* 0x24 */ s32 left;
    /* 0x28 */ s32 right;
    /* 0x2C */ u16 horizontalRepeat;
    /* 0x2E */ u16 verticalRepeat;
    /* 0x30 */ f32 depth;
    /* 0x34 */ s16 horizontalAlignment;
    /* 0x36 */ s16 verticalAlignment;
    /* 0x38 */ s16 absoluteX;
    /* 0x3A */ s16 absoluteY;
};

typedef char TextureDrawRequestLayoutCheck[sizeof(TextureDrawRequest) == 0x3C &&
    offsetof(TextureDrawRequest, horizontalRepeat) == 0x2C &&
    offsetof(TextureDrawRequest, depth) == 0x30 ? 1 : -1];

extern "C" void requestParamsInitialize(TextureDrawRequest *request, u32 flags, s32 x, s32 y, u32 transparency);

#endif

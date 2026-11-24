#ifndef SMT4A_UI_MENU_STEREO_FRAME_H
#define SMT4A_UI_MENU_STEREO_FRAME_H

#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"

enum {
    MENU_FRAME_TABLE = 0x31,
    MENU_FRAME_LAYER = 0x8D
};

/* Draws the three frame tiles at one position and layer. */
static __inline void menuDrawFrameTiles(s32 x, s32 y, u32 layer, f32 opacity)
{
    efctSetSpeed(opacity);
    texDrawTableEntryAtStoredOrigin(2, MENU_FRAME_TABLE, 0, x, y, layer);
    texDrawTableEntryAtStoredOrigin(2, MENU_FRAME_TABLE, 1, x, y, layer);
    texDrawTableEntryAtStoredOrigin(2, MENU_FRAME_TABLE, 9, x, y, layer);
}

/* Draws the frame at its stereo depth. */
static __inline void menuDrawStereoFrame(s32 x, s32 y, f32 opacity)
{
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    menuDrawFrameTiles(x + parallax, y, MENU_FRAME_LAYER, opacity);
}

#endif

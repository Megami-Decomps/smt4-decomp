/* NON_MATCHING: retail parks the tint in d8-d9 and the extra value in s20 from entry, and reloads g_renderCtx around the slot store; armcc keeps them in argument registers. */
#include "common.h"
#include "camp/RenderCtx.h"

/* An RGBA color; a new one starts out opaque white. */
struct RenderColor {
    f32 r, g, b, a;

    RenderColor() : r(1.0f), g(1.0f), b(1.0f), a(1.0f) {}
};

/* The graphics presets block, as far as its active-preset pointer. */
struct GxPresetCurrent {
    /* 0x000 */ u8 unk000[0x16C];
    /* 0x16C */ const void *current;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
extern GxPresetCurrent g_asdGxPresets;
extern u8 g_asdGxSecondaryPreset;

void FUN_001575cc(RenderCtxA *context);
void FUN_004097b4(RenderCtxA *context, RenderColor *color, u32 arg0, u32 arg1, f32 value);

/* Draws with `color` under the render context's slot for the active graphics preset, then restores the slot. */
void FUN_0037a99c(u32 arg0, u32 arg1, RenderColor tint, f32 value)
{
    RenderColor color;
    s32 savedSlot = g_renderCtx->stereoMode;
    s32 slot;

    color = tint;
    if (g_asdGxPresets.current == &g_asdGxPresets) {
        slot = 0;
    } else if (g_asdGxPresets.current == &g_asdGxSecondaryPreset) {
        slot = 1;
    } else {
        slot = 2;
    }
    g_renderCtx->stereoMode = slot;
    FUN_001575cc(g_renderCtx);
    FUN_00157558(g_renderCtx);
    FUN_004097b4(g_renderCtx, &color, arg0, arg1, value);
    g_renderCtx->stereoMode = savedSlot;
}

} /* extern "C" */

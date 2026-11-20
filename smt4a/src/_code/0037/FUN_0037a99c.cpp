/* NON_MATCHING: retail copies the tint from d0/d1 into d8/d9 at entry and stores it with one vstmia of s16-s19; the build moves s2-s4 separately and splits the store. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"

/* An RGBA color; a new one starts out opaque white. */
struct RenderColor {
    f32 r, g, b, a;

    RenderColor() : r(1.0f), g(1.0f), b(1.0f), a(1.0f) {}
};

extern "C" {
extern AsdGxDisplayBuffers g_asdGxSecondaryPreset; /* g_asdGxPresets.displays[1] */

void renderCtxResetFrameState(RenderCtxA *context);
void FUN_004097b4(RenderCtxA *context, RenderColor *color, u32 arg0, u32 arg1, f32 value);

/* Draws with `color` under the render context's slot for the active graphics preset, then restores the slot. */
void FUN_0037a99c(u32 arg0, u32 arg1, RenderColor tint, f32 value)
{
    RenderColor color;
    s32 savedSlot = renderCtxGetStereoMode(g_renderCtx);
    s32 slot;

    color = tint;
    if (g_asdGxPresets.selectedDisplay == &g_asdGxPresets.displays[0]) {
        slot = 0;
    } else if (g_asdGxPresets.selectedDisplay == &g_asdGxSecondaryPreset) {
        slot = 1;
    } else {
        slot = 2;
    }
    renderCtxSetStereoMode(g_renderCtx, slot);
    renderCtxResetFrameState(g_renderCtx);
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    FUN_004097b4(g_renderCtx, &color, arg0, arg1, value);
    renderCtxSetStereoMode(g_renderCtx, savedSlot);
}

} /* extern "C" */

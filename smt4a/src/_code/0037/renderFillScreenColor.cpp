#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"

/* unit-local: an RGBA colour; a new one starts out opaque white. */
struct RenderColor {
    RenderColor() : r(1.0f), g(1.0f), b(1.0f), a(1.0f) {}
    RenderColor(f32 red, f32 green, f32 blue, f32 alpha) : r(red), g(green), b(blue), a(alpha) {}
    f32 r, g, b, a;
};

extern "C" {

void renderCtxResetFrameState(RenderCtxA *context);
void renderCtxFillDisplay(RenderCtxA *context, RenderColor *color, u32 arg0, u32 arg1, f32 value);

/* Draws with `color` under the render context's slot for the active graphics preset, then restores the slot. */
void renderFillScreenColor(u32 arg0, u32 arg1, f32 red, f32 green, f32 blue, f32 alpha, f32 value)
{
    RenderColor color;
    s32 savedSlot = renderCtxGetStereoMode(g_renderCtx);
    s32 slot;

    color = RenderColor(red, green, blue, alpha);
    if (g_asdGxPresets.selectedDisplay == &g_asdGxPresets.displays[0]) {
        slot = 0;
    } else if (g_asdGxPresets.selectedDisplay == &g_asdGxPresets.displays[1]) {
        slot = 1;
    } else {
        slot = 2;
    }
    renderCtxSetStereoMode(g_renderCtx, slot);
    renderCtxResetFrameState(g_renderCtx);
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxFillDisplay(g_renderCtx, &color, arg0, arg1, value);
    renderCtxSetStereoMode(g_renderCtx, savedSlot);
}

} /* extern "C" */

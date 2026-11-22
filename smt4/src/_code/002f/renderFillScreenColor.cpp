#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* unit-local: an RGBA colour; a new one starts out opaque white. */
struct RenderColor {
    RenderColor() : r(1.0f), g(1.0f), b(1.0f), a(1.0f) {}
    RenderColor(f32 red, f32 green, f32 blue, f32 alpha) : r(red), g(green), b(blue), a(alpha) {}
    f32 r, g, b, a;
};

extern "C" {
void renderCtxResetFrameStacks(RenderCtx *scene);
void renderCtxFillDisplay(RenderCtx *scene, const RenderColor *color, u32 mode, u32 flags, f32 opacity);

/* Fills the screen with the colour (red, green, blue, alpha) under the scene's stereo mode for the active
 * graphics preset, then restores the scene's mode. */
void renderFillScreenColor(u32 mode, u32 flags, f32 red, f32 green, f32 blue, f32 alpha, f32 opacity)
{
    RenderColor color;
    s32 savedPreset = renderCtxGetStereoMode(g_titleScene);
    color = RenderColor(red, green, blue, alpha);
    s32 preset;
    if (g_asdGxPresets.selectedDisplay == &g_asdGxPresets.displays[0])
        preset = 0;
    else if (g_asdGxPresets.selectedDisplay == &g_asdGxPresets.displays[1])
        preset = 1;
    else
        preset = 2;
    renderCtxSetStereoMode(g_titleScene, preset);
    renderCtxResetFrameStacks(g_titleScene);
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxFillDisplay(g_titleScene, &color, mode, flags, opacity);
    renderCtxSetStereoMode(g_titleScene, savedPreset);
}
}

/* NON_MATCHING: retail copies the rectangle from d0/d1 into d8/d9 at entry and stores it with one vstmia of s16-s19; the build moves s2-s4 separately and splits the store. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* A rectangle passed in four float registers; it starts out as the unit rectangle. */
struct TitleRect {
    TitleRect() : x(1.0f), y(1.0f), width(1.0f), height(1.0f) {}
    f32 x, y, width, height;
};

extern "C" {
extern AsdGxDisplayBuffers g_asdGxPresetsDisplay1; /* g_asdGxPresets.displays[1] */
void renderCtxResetFrameStacks(RenderCtx *scene);
void FUN_00343364(RenderCtx *scene, const TitleRect *rectangle, u32 mode, u32 flags, f32 opacity);

// Draw a rectangle using the current graphics preset, restoring the scene's selection afterward.
void FUN_002f51bc(u32 mode, u32 flags, TitleRect rect, f32 opacity)
{
    TitleRect rectangle;
    s32 savedPreset = renderCtxGetStereoMode(g_titleScene);
    rectangle = rect;
    s32 preset;
    if (g_asdGxPresets.selectedDisplay == &g_asdGxPresets.displays[0])
        preset = 0;
    else if (g_asdGxPresets.selectedDisplay == &g_asdGxPresetsDisplay1)
        preset = 1;
    else
        preset = 2;
    renderCtxSetStereoMode(g_titleScene, preset);
    renderCtxResetFrameStacks(g_titleScene);
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_00343364(g_titleScene, &rectangle, mode, flags, opacity);
    renderCtxSetStereoMode(g_titleScene, savedPreset);
}
}

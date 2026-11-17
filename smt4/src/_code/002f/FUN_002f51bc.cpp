/* NON_MATCHING: the preset symbols now match retail (g_asdGxPresets / DAT_004e3a0c); retail takes the rectangle in d0/d1, parks it in d8/d9 and stores it after the saved preset is read, the build keeps it in s0-s3. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* A rectangle passed in four float registers; it starts out as the unit rectangle. */
struct TitleRect {
    TitleRect() : x(1.0f), y(1.0f), width(1.0f), height(1.0f) {}
    f32 x, y, width, height;
};

extern "C" {
extern AsdGxDisplayBuffers DAT_004e3a0c; /* g_asdGxPresets.displays[1] */
extern AsdGxDisplayBuffers *DAT_004e3b4c; /* g_asdGxPresets.selectedDisplay */
void FUN_002c3a14(RenderCtx *scene);
void FUN_00343364(RenderCtx *scene, const TitleRect *rectangle, u32 mode, u32 flags, f32 opacity);

// Draw a rectangle using the current graphics preset, restoring the scene's selection afterward.
void FUN_002f51bc(u32 mode, u32 flags, TitleRect rect, f32 opacity)
{
    TitleRect rectangle;
    s32 savedPreset = g_titleScene->stereoMode;
    rectangle = rect;
    s32 preset;
    if (DAT_004e3b4c == &g_asdGxPresets.displays[0])
        preset = 0;
    else if (DAT_004e3b4c == &DAT_004e3a0c)
        preset = 1;
    else
        preset = 2;
    g_titleScene->stereoMode = preset;
    FUN_002c3a14(g_titleScene);
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_00343364(g_titleScene, &rectangle, mode, flags, opacity);
    g_titleScene->stereoMode = savedPreset;
}
}

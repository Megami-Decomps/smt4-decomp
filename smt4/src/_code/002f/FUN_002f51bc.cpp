/* NON_MATCHING: rectangle storage and saved-argument registers differ; the second preset uses an addend rather than a separate symbol. */
#include "title/titleMain.h"

struct TitleGxPreset {
    u8 data[0x2c];
};
extern "C" {
extern TitleScene *g_titleScene;
extern TitleGxPreset g_asdGxPresets[3];
extern TitleGxPreset *DAT_004e3b4c;
void FUN_002c39a4(TitleScene *scene);
void FUN_002c3a14(TitleScene *scene);
void FUN_00343364(TitleScene *scene, const f32 *rectangle, u32 mode, u32 flags, f32 opacity);

// Draw a rectangle using the current graphics preset, restoring the scene's selection afterward.
void FUN_002f51bc(u32 mode, u32 flags, f32 x, f32 y, f32 width, f32 height, f32 opacity)
{
    f32 rectangle[4] = {x, y, width, height};
    s32 savedPreset = g_titleScene->unk528;
    s32 preset;
    if (DAT_004e3b4c == &g_asdGxPresets[0])
        preset = 0;
    else if (DAT_004e3b4c == &g_asdGxPresets[1])
        preset = 1;
    else
        preset = 2;
    g_titleScene->unk528 = preset;
    FUN_002c3a14(g_titleScene);
    FUN_002c39a4(g_titleScene);
    FUN_00343364(g_titleScene, rectangle, mode, flags, opacity);
    g_titleScene->unk528 = savedPreset;
}
}

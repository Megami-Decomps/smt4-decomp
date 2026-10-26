/* NON_MATCHING: cached-state push/pop scheduling and final float/integer literal-pool order differ. */
#include "title/titleMain.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern TitleScene *g_titleScene;
u32 FUN_002c5d80(u32 mode, u32 option);
s32 effMenuGetFlag();
void effMenuCallHandler(s32 mode, u32 enabled);
void FUN_001db658(s32 count, u32 colorA, u32 colorB, f32 x, f32 y, f32 z, f32 height);

// Draw the effect editor under a temporary scene state, with an optional debug backdrop.
void FUN_002d7e44()
{
    // The render cache and debug flag are beyond the shared prefix layouts.
    struct EditorDrawView {
        u8 prefix[0x78];
        s32 debugBackdrop;
    };
    RenderCtx *scene = g_titleScene;
    u32 state = FUN_002c5d80(1, 1);
    renderCtxPushA(scene, state);
    renderCtxSelectTexture(g_titleScene, 0);
    u32 enabled = 1;
    if (effMenuGetFlag() != 0 && g_titleScene->stereoMode == 0)
        enabled = 0;
    effMenuCallHandler(0, enabled);
    renderStackPop(&g_titleScene->stackA);
    if (reinterpret_cast<EditorDrawView *>(&g_effectEditor)->debugBackdrop != 0)
        FUN_001db658(30, 0x606060FF, 0x909090FF, 0.0f, 0.0f, 0.0f, 17.5f);
}
}

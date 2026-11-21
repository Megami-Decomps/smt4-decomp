#include "ui/UiSpriteApi.h"
#include "title/titleMain.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/S1ListPanel.h"
#include "code/Code0030.h"

extern "C" {
extern TitleScene *g_titleScene;
u32 renderCtxPackPassFlags(u32 mode, u32 option);
s32 effMenuGetFlag();
void debugGuideDrawGrid(s32 count, u32 colorA, u32 colorB, f32 x, f32 y, f32 z, f32 height);

// Draw the effect editor under a temporary scene state, with an optional debug backdrop.
void titleSceneDrawEffectEditor()
{
    // The render cache and debug flag are beyond the shared prefix layouts.
    struct EditorDrawView {
        u8 prefix[0x78];
        s32 debugBackdrop;
    };
    RenderCtx *scene = g_titleScene;
    u32 state = renderCtxPackPassFlags(1, 1);
    renderCtxPushA(scene, state);
    renderCtxSelectTexture(g_titleScene, 0);
    u32 enabled = 1;
    if (effMenuGetFlag() != 0 && g_titleScene->stereoMode == 0)
        enabled = 0;
    effMenuCallHandler(0, enabled);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    if (reinterpret_cast<EditorDrawView *>(&g_effectEditor)->debugBackdrop != 0) {
        // A 30-line debug grid at the origin.
        u32 lightColor = 0x909090FF;
        u32 darkColor = 0x606060FF;
        debugGuideDrawGrid(30, darkColor, lightColor, 0.0f, 0.0f, 0.0f, 17.5f);
    }
}
}

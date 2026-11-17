#include "event/2dEvent/SmokeFade.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes_VariantA.h"
#include "gfx/StereoParallax.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern SmokeFadeState *DAT_0043df28;
extern SmokeFadeImage DAT_0043df40[2];
void gxResetColorQuadToWhite();
u32 renderCtxPackPassFlags(u32 value, bool enabled);
void efctSetSpeed(f32 speed);

/* Draw callback: draws the two smoke-fade images over the title scene at their opacities. */
s32 FUN_001ad4f4(u32)
{
    SmokeFadeState *fade = DAT_0043df28;
    if (fade->active == 0)
        return 0;
    gxResetColorQuadToWhite();
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, false));
    s32 firstEntry = DAT_0043df40[0].node * 1000;
    efctSetSpeed(fade->opacity);
    texDrawTableEntryAtStoredOrigin(2, DAT_0043df40[0].table, firstEntry, 0, 0, 250);
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    renderCtxCalculateStereoParallax(g_titleScene, 0.25f);
    s32 secondEntry = DAT_0043df40[1].node * 1000;
    efctSetSpeed(fade->scale);
    texDrawTableEntryAtStoredOrigin(2, DAT_0043df40[1].table, secondEntry, 0, 0, 251);
    renderStackPop(&g_titleScene->stackB);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}

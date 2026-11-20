#include "ui/UiSpriteApi.h"
/* NON_MATCHING: readable rebuild from asm of a scene overlay draw (the slide-in banner and the mark sprites inside render states); armcc here orders the render-state operations, keeps the scene pointer and the banner sprite in other registers than retail, and loads the owner global after the push. */
#include "gfx/RenderStateStack.h"
#include "shard/TextureDrawCall.h"
#include "Model/MoriModelShadowMap.h"
#include "util/BitsAndBytes.h"
#include "shard/X14_EngineUnits.h"

extern "C" {
s32 scriptProcessCreateWhenReady(ResultWorkA *scene);
u32 renderCtxPackPassFlags(s32 a, s32 b);
void efctSetSpeed(f32 speed);
void FUN_004b0164(ResultWorkA *scene, u32 x, u32 y);
void skinObjectUpdateMatrices(RenderCtxA *ctx);
void renderCtxResetColorScale(RenderCtxA *ctx);

/* Draws the overlay when its scene is ready: the sliding banner while the scene is in the intro
 * step, then the scene's own parts. Always returns 0. */
u32 FUN_00229324(void)
{
    ResultWorkA *scene = g_engineCleanupOwner.instance;
    if (scene == NULL || scriptProcessCreateWhenReady(scene) == 0)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *ctx = g_renderCtx;
    u32 firstState = renderCtxPackPassFlags(1, 0);
    renderStackPushCounted(&ctx->stackA, firstState);
    ctx = g_renderCtx;
    if (scene->state == 13 && scene->step == 5 && uiSpriteGetCompletionState(&scene->banner) == 0) {
        if (scene->timer < 16) {
            s32 offset = scene->timer * -30;
            if (offset < -240)
                offset = -240;
            renderStackSet(&ctx->stackB, packNibblesAndByte(6, 1, 0));
            if (offset > -240)
                texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x113, 0, offset, 0xF1);
            texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x114, 0, offset + 240, 0xF1);
            renderStackSet(&g_renderCtx->stackB, packNibblesAndByte(6, 7, 0));
        }
        if (scene->timer >= 9) {
            efctSetSpeed(g_engineCleanupOwner.alpha);
            texDrawTableEntryAtStoredOrigin(2, 0x1D, 0x115, 0, 0, 0xF2);
            efctSetSpeed(1.0f);
        }
    }
    renderStackPopChecked(&g_renderCtx->stackA);
    ctx = g_renderCtx;
    if (scene->state < 10) {
        if (scene->state != 0) {
            u32 secondState = renderCtxPackPassFlags(1, 0);
            renderStackPushCounted(&ctx->stackA, secondState);
            FUN_004b0164(scene, vec2GetXInt(&scene->originSprite), vec2GetYInt(&scene->originSprite));
            renderStackPop(&g_renderCtx->stackA);
        }
        renderStackSet(&g_renderCtx->stackB, packNibblesAndByte(6, 7, 0));
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}

} /* extern "C" */

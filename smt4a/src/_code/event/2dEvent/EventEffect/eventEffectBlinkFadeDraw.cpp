#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {
extern EventEffectGlobalsA g_eventEffect;
void gxResetColorQuadToWhite();
s32 packNibblesAndByte(u32, u32, u32);
void efctSetSpeed(f32);

/* Draw callback of the blink fade: one centred image, then the left/right pair offset by the position. */
u8 eventEffectBlinkFadeDraw()
{
    EventBannerWork *work = g_eventEffect.filterState.banner;
    if (work->active == 0) {
        return 0;
    }
    gxResetColorQuadToWhite();
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    s32 firstEntry = g_eventBannerTextures[0].node * 1000;
    efctSetSpeed(work->alpha);
    texDrawTableEntryAtStoredOrigin(2, g_eventBannerTextures[0].table, firstEntry, 0, 0, 0xfa);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    s32 secondEntry = g_eventBannerTextures[1].node * 1000;
    efctSetSpeed(1.0f);
    texDrawTableEntryAtStoredOrigin(2, g_eventBannerTextures[1].table, secondEntry, 0, -work->offset, 0xfb);
    texDrawTableEntryAtStoredOrigin(2, g_eventBannerTextures[1].table, secondEntry + 1, 0, work->offset, 0xfb);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    return 0;
}
}

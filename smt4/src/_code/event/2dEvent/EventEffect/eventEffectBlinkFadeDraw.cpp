#include "event/2dEvent/BlinkFade.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall_Payload.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
extern BlinkFadeWork *g_eventEffect;
extern BlinkFadeTexture DAT_0043df00[2];
void gxResetColorQuadToWhite();
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);
void renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);

/* Draw callback of the blink fade: one centred image, then the left/right pair offset by the position. */
u8 eventEffectBlinkFadeDraw(u32)
{
    BlinkFadeWork *work = g_eventEffect;
    if (work->visible == 0) {
        return 0;
    }
    gxResetColorQuadToWhite();
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, false));
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    renderCtxCalculateStereoParallax(g_titleScene, 0.25f);
    s32 firstEntry = DAT_0043df00[0].node * 1000;
    efctSetSpeed(work->alpha);
    TextureDrawPayloadIV payload;
    payload.words[0] = 0;
    payload.words[1] = 250;
    texDrawTableEntryAtStoredOrigin(2, DAT_0043df00[0].table, firstEntry, 0, payload);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
    s32 secondEntry = DAT_0043df00[1].node * 1000;
    efctSetSpeed(1.0f);
    payload.words[0] = -work->position;
    payload.words[1] = 251;
    texDrawTableEntryAtStoredOrigin(2, DAT_0043df00[1].table, secondEntry, 0, payload);
    payload.words[0] = work->position;
    texDrawTableEntryAtStoredOrigin(2, DAT_0043df00[1].table, secondEntry + 1, 0, payload);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    return 0;
}
}

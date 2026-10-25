#include "event/2dEvent/BlinkFade.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern BlinkFadeWork *g_eventEffect;
extern BlinkFadeTexture DAT_0043df00[2];
extern RenderCtx *g_titleScene;
void FUN_002bed3c();
void renderCtxSelectStereoLayout(RenderCtx *context);
u32 FUN_002c5d80(u32 value, bool enabled);
void efctSetSpeed(f32 speed);
void FUN_002bf288(u32 flags, u32 table, s32 entry, u32 argument, TextureDrawPayloadIV payload);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);
void renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);

/* Draw callback of the blink fade: one centred image, then the left/right pair offset by the position. */
u8 FUN_002222e8(u32)
{
    BlinkFadeWork *work = g_eventEffect;
    if (work->visible == 0) {
        return 0;
    }
    FUN_002bed3c();
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, false));
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    renderCtxCalculateStereoParallax(g_titleScene, 0.25f);
    s32 firstEntry = DAT_0043df00[0].node * 1000;
    efctSetSpeed(work->alpha);
    TextureDrawPayloadIV payload;
    payload.words[0] = 0;
    payload.words[1] = 250;
    FUN_002bf288(2, DAT_0043df00[0].table, firstEntry, 0, payload);
    renderStackPop(&g_titleScene->stackB);
    s32 secondEntry = DAT_0043df00[1].node * 1000;
    efctSetSpeed(1.0f);
    payload.words[0] = -work->position;
    payload.words[1] = 251;
    FUN_002bf288(2, DAT_0043df00[1].table, secondEntry, 0, payload);
    payload.words[0] = work->position;
    FUN_002bf288(2, DAT_0043df00[1].table, secondEntry + 1, 0, payload);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}

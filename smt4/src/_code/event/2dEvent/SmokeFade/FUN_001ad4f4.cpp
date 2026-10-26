/* NON_MATCHING: saved global/zero registers r6/r7 are exchanged; early inactive return now matches retail. */
#include "event/2dEvent/SmokeFade.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes_VariantA.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "gfx/StereoParallax.h"

extern "C" {
extern SmokeFadeState *DAT_0043df28;
extern SmokeFadeImage DAT_0043df40[2];
extern RenderCtx *g_titleScene;
void FUN_002bed3c();
u32 FUN_002c5d80(u32 value, bool enabled);
void efctSetSpeed(f32 speed);
void FUN_002bf288(u32 flags, u32 table, s32 entry, u32 argument, TextureDrawPayloadIV payload);

s32 FUN_001ad4f4(u32)
{
    SmokeFadeState *fade = DAT_0043df28;
    if (fade->active == 0)
        return 0;
    FUN_002bed3c();
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, FUN_002c5d80(1, false));
    s32 firstEntry = DAT_0043df40[0].node * 1000;
    efctSetSpeed(fade->opacity);
    TextureDrawPayloadIV payload;
    payload.words[0] = 0;
    payload.words[1] = 250;
    FUN_002bf288(2, DAT_0043df40[0].table, firstEntry, 0, payload);
    renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
    renderCtxCalculateStereoParallax(g_titleScene, 0.25f);
    s32 secondEntry = DAT_0043df40[1].node * 1000;
    efctSetSpeed(fade->scale);
    payload.words[1] = 251;
    FUN_002bf288(2, DAT_0043df40[1].table, secondEntry, 0, payload);
    renderStackPop(&g_titleScene->stackB);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    return 0;
}
}

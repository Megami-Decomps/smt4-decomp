/* NON_MATCHING: render-state push address scheduling and null/return control flow differ; stereo draw body matches. */
#include "camp/RenderCtx.h"
#include "battle/Talk/btlTalkBustUp.h"

extern "C" {
extern BtlTalkBustUp *g_btlTalkBustUp;
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(s32 enabled, s32 mode);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
s32 aocJobIsValid();
s32 btlMainIsSecondJobValid();
void FUN_003d939c(BtlTalkBustUp *portrait, f32 parallax);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

u32 FUN_00321544()
{
    BtlTalkBustUp *portrait = g_btlTalkBustUp;
    if (portrait != NULL) {
        FUN_00157558(g_renderCtx);
        RenderCtxA *context = g_renderCtx;
        renderStackPush(&context->stackA, FUN_001692ac(1, 0));
        if (portrait->unk2F4 != 0 && portrait->state == 2) {
            s32 parallax = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.27f));
            if (aocJobIsValid() != 0 || btlMainIsSecondJobValid() != 0) {
                parallax = static_cast<s32>(renderCtxCalculateStereoParallax(g_renderCtx, 0.26f));
            }
            FUN_003d939c(portrait, static_cast<f32>(parallax));
        }
        renderStackPop(&g_renderCtx->stackA);
        skinObjectUpdateMatrices(g_renderCtx);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}
}

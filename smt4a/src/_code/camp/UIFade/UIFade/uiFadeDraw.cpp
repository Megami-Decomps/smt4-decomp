/* NON_MATCHING: in the inlined render-state push the new entry's address is computed into ip instead of reusing r3 */
/* Draws the fade overlay while its alpha is above zero. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "camp/UIFade/UIFade.h"

extern "C" {

int FUN_001835b4(int a, int b, int c, int d, int e, u32 arg);
int efctSetSpeed(f32 alpha);
int renderCtxResetColorScale(RenderCtxA *ctx);
int FUN_00157558(RenderCtxA *ctx);
int FUN_001692ac(u32 a, u32 b);

extern UIFadeGlobals g_uiFade;
extern RenderCtxA *g_renderCtx;

void uiFadeDraw(u32 arg)
{
    UIFadeWork *fade = g_uiFade.work;
    RenderCtxA *ctx;
    int state;

    if (fade->alpha <= 0.0f) {
        return;
    }
    FUN_00157558(g_renderCtx);
    ctx = g_renderCtx;
    state = FUN_001692ac(1, 0);
    renderStackPush(&ctx->stackA, state);
    efctSetSpeed(fade->alpha);
    FUN_001835b4(2, 8, 0x10c, 0, 0, arg);
    renderStackPop(&g_renderCtx->stackA);
    renderCtxResetColorScale(g_renderCtx);
    efctSetSpeed(1.0f);
}

} /* extern "C" */

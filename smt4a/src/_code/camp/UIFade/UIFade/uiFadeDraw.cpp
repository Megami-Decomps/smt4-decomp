/* Draws the fade overlay while its alpha is above zero. */
#include "common.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "camp/UIFade/UIFade.h"

extern "C" {
int efctSetSpeed(f32 alpha);
int renderCtxResetColorScale(RenderCtxA *ctx);
int renderCtxPackPassFlags(u32 a, u32 b);

extern UIFadeGlobals g_uiFade;

void uiFadeDraw(u32 arg)
{
    UIFadeWork *fade = g_uiFade.work;
    RenderCtxA *ctx;
    int state;

    if (fade->alpha <= 0.0f) {
        return;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    ctx = g_renderCtx;
    state = renderCtxPackPassFlags(1, 0);
    renderStackPush(ctx->stacks + RENDER_STACK_A, state);
    efctSetSpeed(fade->alpha);
    texDrawTableEntryAtStoredOrigin(2, 8, 0x10c, 0, 0, arg);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderCtxResetColorScale(g_renderCtx);
    efctSetSpeed(1.0f);
}

} /* extern "C" */

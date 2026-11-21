/* Draws the fade overlay while its alpha is above zero. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "camp/UIFade/UIFade.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

int efctSetSpeed(f32 alpha);
int renderCtxResetColorScale(RenderCtx *ctx);
int renderCtxPackPassFlags(u32 a, u32 b);

extern UIFadeGlobals g_uiFade;

void uiFadeDraw(u32 arg)
{
    UIFadeWork *fade = g_uiFade.work;
    RenderCtx *ctx;
    int state;

    if (fade->alpha <= 0.0f) {
        return;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    ctx = g_titleScene;
    state = renderCtxPackPassFlags(1, 0);
    renderStackPush(ctx->stacks + RENDER_STACK_A, state);
    efctSetSpeed(fade->alpha);
    texDrawTableEntryAtStoredOrigin(2, 0xe, 0x10c, 0, 0, arg);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxResetColorScale(g_titleScene);
    efctSetSpeed(1.0f);
}

} /* extern "C" */

/* Draws the fade overlay while its alpha is above zero. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "camp/UIFade/UIFade.h"

extern "C" {

int efctSetSpeed(f32 alpha);
int FUN_002c18e4(RenderCtx *ctx);
int FUN_002c5d80(u32 a, u32 b);

extern UIFadeGlobals g_uiFade;
extern RenderCtx *g_titleScene;

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
    state = FUN_002c5d80(1, 0);
    renderStackPush(&ctx->stackA, state);
    efctSetSpeed(fade->alpha);
    FUN_002bf288(2, 0xe, 0x10c, 0, 0, arg);
    renderStackPop(&g_titleScene->stackA);
    FUN_002c18e4(g_titleScene);
    efctSetSpeed(1.0f);
}

} /* extern "C" */

#include "kernel/jyoucyu.h"
#include "gfx/ColoredQuad.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"
#include "Model/MoriModelShadowMap.h"

struct JyoucyuLoadingView {
    JyoucyuWork work;
    s32 state;
};
extern "C" {
extern JyoucyuGlobals g_jyoucyu;
s32 renderCtxPackPassFlags(s32 mode, s32 flags);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();

u32 jyoucyuDrawLoadingOverlay()
{
    JyoucyuLoadingView *work = (JyoucyuLoadingView *)g_jyoucyu.work;
    if (work->state >= 100) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    renderCtxSelectTexture(g_renderCtx, 0);
    gxSubmitDrawZeroExtraParams(0.0f, 0.0f, 400.0f, 240.0f, 255, 255, 255, 0.0f, 255);
    if (work->state < 100) {
        texDrawTableEntryAtStoredOrigin(2, 8, 0x18a, 0, 0, 11);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    efctSetSpeed(1.0f);
    return 0;
}
}

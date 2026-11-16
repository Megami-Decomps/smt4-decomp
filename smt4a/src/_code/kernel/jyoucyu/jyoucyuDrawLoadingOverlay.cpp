/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 6 diff lines remain, scheduling/register allocation only. */
#include "kernel/jyoucyu.h"
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
void FUN_0014e314(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

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
    FUN_0014e314(255, 255, 255, 255, 0.0f, 0.0f, 400.0f, 240.0f, 0.0f);
    if (work->state < 100) {
        texDrawTableEntryAtStoredOrigin(2, 8, 0x18a, 0, 0, 11);
    }
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
    return 0;
}
}

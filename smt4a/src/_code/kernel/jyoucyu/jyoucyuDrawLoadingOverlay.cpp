/* NON_MATCHING: stack-address evaluation order now matches retail (renderCtxPush wrappers); 6 diff lines remain, scheduling/register allocation only. */
#include "kernel/jyoucyu.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

struct JyoucyuLoadingView {
    JyoucyuWork work;
    s32 state;
};
extern "C" {
extern JyoucyuGlobals g_jyoucyu;
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(s32 mode, s32 flags);
void efctSetSpeed(f32 speed);
void FUN_00183bb0();
void FUN_0016c4b8(RenderCtxA *context, s32 mode);
void FUN_0014e314(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

u32 jyoucyuDrawLoadingOverlay()
{
    JyoucyuLoadingView *work = (JyoucyuLoadingView *)g_jyoucyu.work;
    if (work->state >= 100) {
        return 0;
    }
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    FUN_0016c4b8(g_renderCtx, 0);
    FUN_0014e314(255, 255, 255, 255, 0.0f, 0.0f, 400.0f, 240.0f, 0.0f);
    if (work->state < 100) {
        FUN_001835b4(2, 8, 0x18a, 0, 0, 11);
    }
    renderStackPop(&g_renderCtx->stackA);
    efctSetSpeed(1.0f);
    return 0;
}
}

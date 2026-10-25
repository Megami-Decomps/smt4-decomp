#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
s32 FUN_001692ac(s32 preset, s32 index);
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void FUN_00183bb0(void);
void efctSetSpeed(f32 speed);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw the stereo-adjusted overlay with a temporary render preset and restore the context.
u32 FUN_00290688(void)
{
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);
    f32 parallax = renderCtxCalculateStereoParallax(g_renderCtx, 0.33f);
    FUN_001835b4(2, 0, 0x1FFB8, (s32)parallax - 56, -8, 1);
    FUN_00183bb0();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

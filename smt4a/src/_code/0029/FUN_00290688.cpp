#include "gfx/StereoParallax.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
s32 renderCtxPackPassFlags(s32 preset, s32 index);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

// Draw the stereo-adjusted overlay with a temporary render preset and restore the context.
u32 FUN_00290688(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPush(&context->stackA, state);
    f32 parallax = renderCtxCalculateStereoParallax(g_renderCtx, 0.33f);
    texDrawTableEntryAtStoredOrigin(2, 0, 0x1FFB8, (s32)parallax - 56, -8, 1);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

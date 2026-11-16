#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

extern "C" {
extern RenderCtx *g_titleScene;
void renderCtxSelectStereoLayout(RenderCtx *context);
s32 renderCtxPackPassFlags(u32 kind, u32 flags);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void gxResetColorQuadToWhite(void);
void efctSetSpeed(f32 speed);
void renderCtxResetColorScale(RenderCtx *context);

// Draw the title sprite with stereo parallax and restore its render state.
u32 FUN_001e1418(void)
{
    renderCtxSelectStereoLayout(g_titleScene);
    RenderCtx *context = g_titleScene;
    s32 renderState = renderCtxPackPassFlags(1, 0);
    renderStackPush(&context->stackA, renderState);
    f32 parallax = renderCtxCalculateStereoParallax(g_titleScene, 0.33f);
    texDrawTableEntryAtStoredOrigin(2, 2, 0x1FFB8, static_cast<s32>(parallax) - 56, -8, 1);
    gxResetColorQuadToWhite();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
}

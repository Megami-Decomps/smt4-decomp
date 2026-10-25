#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *context);
s32 FUN_002c5d80(u32 kind, u32 flags);
f32 renderCtxCalculateStereoParallax(RenderCtx *context, f32 depth);
void FUN_002bed3c(void);
void efctSetSpeed(f32 speed);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

// Draw the title sprite with stereo parallax and restore its render state.
u32 FUN_001e1418(void)
{
    FUN_002c39a4(g_titleScene);
    RenderCtx *context = g_titleScene;
    s32 renderState = FUN_002c5d80(1, 0);
    renderStackPush(&context->stackA, renderState);
    f32 parallax = renderCtxCalculateStereoParallax(g_titleScene, 0.33f);
    FUN_002bf288(2, 2, 0x1FFB8, static_cast<s32>(parallax) - 56, -8, 1);
    FUN_002bed3c();
    efctSetSpeed(1.0f);
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}
}

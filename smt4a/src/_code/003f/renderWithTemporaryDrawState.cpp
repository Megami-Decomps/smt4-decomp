#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"

extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
void efctSetSpeed(f32 speed);
u32 renderCtxPackPassFlags(u32 mode, u32 option);
void renderCtxResetColorScale(RenderCtxA *context);
void FUN_003f82b8(u32 argument);

// Render under a temporary draw state and restore the standard blend and color settings.
u32 renderWithTemporaryDrawState(u32 argument)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    FUN_003f82b8(argument);
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

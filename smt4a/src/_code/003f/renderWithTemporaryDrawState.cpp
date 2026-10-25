#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *context);
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 low, u32 high, u32 byte);
u32 FUN_001692ac(u32 mode, u32 option);
void renderCtxResetColorScale(RenderCtxA *context);
void FUN_003f82b8(u32 argument);

// Render under a temporary draw state and restore the standard blend and color settings.
u32 renderWithTemporaryDrawState(u32 argument)
{
    FUN_00157558(g_renderCtx);
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    FUN_003f82b8(argument);
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

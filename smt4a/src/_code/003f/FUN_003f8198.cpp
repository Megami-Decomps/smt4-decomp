/* NON_MATCHING: cached-state push/pop address scheduling differs; all remaining instructions match. */
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtx *g_renderCtx;
void FUN_00157558(RenderCtx *context);
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 low, u32 high, u32 byte);
u32 FUN_001692ac(u32 mode, u32 option);
void renderCtxResetColorScale(RenderCtx *context);
void FUN_003f82b8(u32 argument);

// Render under a temporary draw state and restore the standard blend and color settings.
u32 FUN_003f8198(u32 argument)
{
    FUN_00157558(g_renderCtx);
    RenderCtx *context = g_renderCtx;
    u32 drawState = FUN_001692ac(1, 0);
    context->drawStateView.state.push(drawState);
    FUN_003f82b8(argument);
    efctSetSpeed(1.0f);
    g_renderCtx->drawStateView.state.pop();
    context = g_renderCtx;
    u32 blendState = packNibblesAndByte(6, 7, 0);
    context->blendStateView.state.set(blendState);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

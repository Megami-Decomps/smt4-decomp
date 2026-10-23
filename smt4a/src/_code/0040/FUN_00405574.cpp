/* NON_MATCHING: only cached-state push/pop address scheduling differs (77 rows each). */
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtx *g_renderCtx;
void FUN_00157558(RenderCtx *context);
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 low, u32 high, u32 byte);
u32 FUN_001692ac(u32 mode, u32 option);
void renderCtxResetColorScale(RenderCtx *context);
void FUN_0040307c(void *work);

// Draw the content list after initialization, restoring speed, blend and color state.
u32 FUN_00405574(void *work)
{
    struct ContentListRenderView {
        u32 unk00;
        u8 state;
    };
    ContentListRenderView *view = static_cast<ContentListRenderView *>(work);
    if (view->state == 0 || view->state == 1)
        return 0;
    FUN_00157558(g_renderCtx);
    RenderCtx *context = g_renderCtx;
    u32 drawState = FUN_001692ac(1, 0);
    context->drawStateView.state.push(drawState);
    FUN_0040307c(work);
    efctSetSpeed(1.0f);
    g_renderCtx->drawStateView.state.pop();
    context = g_renderCtx;
    u32 blendState = packNibblesAndByte(6, 7, 0);
    context->blendStateView.state.set(blendState);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

/* NON_MATCHING: early-result placement and cached-state push/pop address/register allocation differ. */
#include "shard/S1ListPanel.h"

struct HunterDatabaseDrawView {
    u32 unk00;
    u8 state;
};
extern "C" {
void FUN_00157558(RenderCtx *);
void efctSetSpeed(f32);
void renderCtxResetColorScale(RenderCtx *);
void FUN_004058b0(HunterDatabaseDrawView *);
extern RenderCtx *g_renderCtx;
u32 packNibblesAndByte(u32, u32, u32);
u32 FUN_001692ac(u32, u32);

// Draw the database with a temporary draw state, then restore blending and color.
u32 FUN_004056a8(HunterDatabaseDrawView *work)
{
    if (work->state != 0 && work->state != 1) {
        FUN_00157558(g_renderCtx);
        RenderCtx *context = g_renderCtx;
        u32 drawState = FUN_001692ac(1, 0);
        context->drawStateView.state.push(drawState);
        FUN_004058b0(work);
        efctSetSpeed(1.0f);
        g_renderCtx->drawStateView.state.pop();
        context = g_renderCtx;
        u32 blendState = packNibblesAndByte(6, 7, 0);
        context->blendStateView.state.set(blendState);
        renderCtxResetColorScale(g_renderCtx);
    }
    return 0;
}
}

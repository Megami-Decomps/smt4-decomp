/* NON_MATCHING: only cached-state push/pop address scheduling differs (75 rows each). */
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtx *g_renderCtx;
void FUN_00157558(RenderCtx *context);
void renderCtxResetColorScale(RenderCtx *context);
void skinObjectUpdateMatrices(RenderCtx *context);
void FUN_00183bb0();
s32 jobIsValid(u32 job);
u32 FUN_001692ac(u32 mode, u32 option);
void FUN_002609d8(u32 job, s32 mode, s32 initial);

// Draw the two owned jobs during active menu states, preserving the cached draw state.
void FUN_00499b58(void *work)
{
    struct PairedJobDrawView {
        u32 unk00;
        s32 state;
        u8 prefix[0x16018];
        u32 firstJob;
        u32 secondJob;
    };
    PairedJobDrawView *view = static_cast<PairedJobDrawView *>(work);
    if (view->state <= 0)
        return;
    if (view->state >= 20)
        return;
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();
    RenderCtx *context = g_renderCtx;
    u32 drawState = FUN_001692ac(1, 0);
    context->drawStateView.state.push(drawState);
    if (jobIsValid(view->firstJob))
        FUN_002609d8(view->firstJob, 0, 0);
    if (jobIsValid(view->secondJob))
        FUN_002609d8(view->secondJob, 0, 0);
    g_renderCtx->drawStateView.state.pop();
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}

#include "camp/RenderCtx.h"
#include "shard/JobWork.h"
#include "util/PackNibbles.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
u32 FUN_00387580(u32, f32);
u32 FUN_001692ac(u32, u32);
void taskRunPhase(s32);
void skinObjectUpdateMatrices(RenderCtxA *);
void renderCtxResetColorScale(RenderCtxA *);
void FUN_00157558(RenderCtxA *);

/* Run this phase with temporary render states, then restore state and refresh the context. */
s32 renderScopedTaskPhaseOne(u32 job)
{
    jobGetWork(job);
    renderCtxPushC(g_renderCtx, FUN_00387580(6, 0.0f));
    renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
    renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    taskRunPhase(1);
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->additional.stackC);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    FUN_00157558(g_renderCtx);
    return 0;
}
}

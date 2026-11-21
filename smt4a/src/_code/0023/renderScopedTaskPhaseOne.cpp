#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/JobWork.h"
#include "util/BitsAndBytes.h"

extern "C" {
u32 renderCtxPackPassFlagsWithAlpha(u32, f32);
u32 renderCtxPackPassFlags(u32, u32);
void taskRunPhase(s32);
void skinObjectUpdateMatrices(RenderCtxA *);
void renderCtxResetColorScale(RenderCtxA *);
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *);

/* Run this phase with temporary render states, then restore state and refresh the context. */
s32 renderScopedTaskPhaseOne(u32 job)
{
    jobGetWork(job);
    renderCtxPushC(g_renderCtx, renderCtxPackPassFlagsWithAlpha(6, 0.0f));
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
    taskRunPhase(1);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    return 0;
}
}

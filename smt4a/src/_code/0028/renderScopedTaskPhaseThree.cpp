#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "shard/JobWork.h"
#include "util/BitsAndBytes.h"
extern "C" {
s32 renderCtxPackPassFlagsWithAlpha(u32, f32);
s32 renderCtxPackPassFlags(u32, u32);
void taskRunPhase(u32);
void skinObjectUpdateMatrices(RenderCtxA *);
void renderCtxResetColorScale(RenderCtxA *);
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *);

s32 renderScopedTaskPhaseThree(u32 job)
{
    jobGetWork(job);
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
    renderStackPush(context->stacks + RENDER_STACK_C, state);
    context = g_renderCtx;
    state = renderCtxPackPassFlags(1, 0);
    renderStackPush(context->stacks + RENDER_STACK_A, state);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 1, 0);
    renderStackPush(context->stacks + RENDER_STACK_B, state);
    taskRunPhase(3);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    return 0;
}
}

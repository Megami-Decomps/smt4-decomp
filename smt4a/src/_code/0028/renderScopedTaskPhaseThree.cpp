#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_00387580(u32, f32);
s32 FUN_001692ac(u32, u32);
s32 packNibblesAndByte(u32, u32, u32);
void taskRunPhase(u32);
void skinObjectUpdateMatrices(RenderCtxA *);
void renderCtxResetColorScale(RenderCtxA *);
void FUN_00157558(RenderCtxA *);

s32 renderScopedTaskPhaseThree(u32 job)
{
    jobGetWork(job);
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_00387580(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    context = g_renderCtx;
    state = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 1, 0);
    renderStackPush(&context->stackB, state);
    taskRunPhase(3);
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->additional.stackC);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    FUN_00157558(g_renderCtx);
    return 0;
}
}

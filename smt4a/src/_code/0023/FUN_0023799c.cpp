/* NON_MATCHING: inline stack-push address scheduling and saved context/zero registers differ. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void *jobGetWork();
u32 FUN_00387580(u32, f32);
u32 FUN_001692ac(u32, u32);
u32 packNibblesAndByte(u32, u32, u32);
void taskRunPhase(s32);
void skinObjectUpdateMatrices(RenderCtxA *);
void renderCtxResetColorScale(RenderCtxA *);
void FUN_00157558(RenderCtxA *);

/* Run this phase with temporary render states, then restore state and refresh the context. */
u32 FUN_0023799c()
{
    jobGetWork();
    RenderCtxA *context = g_renderCtx;
    renderStackPush(&context->additional.stackC, FUN_00387580(6, 0.0f));
    context = g_renderCtx;
    renderStackPush(&context->stackA, FUN_001692ac(1, 0));
    context = g_renderCtx;
    renderStackPush(&context->stackB, packNibblesAndByte(6, 1, 0));
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

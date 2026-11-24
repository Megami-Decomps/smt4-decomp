#include "camp/RenderCtx.h"
#include "shard/JobWork.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
s32 gxPackFadeKindAlphaWord(u32 mode, f32 alpha);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
void taskRunPhase(u32 phase);
void renderCtxResetColorScale(RenderCtx *context);

s32 FUN_001aa4a8(u32 job)
{
    jobGetWork(job);
    RenderCtx *context = g_titleScene;
    renderCtxPushC(context, gxPackFadeKindAlphaWord(6, 0.0f));
    context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    context = g_titleScene;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    taskRunPhase(0);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_C);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
}

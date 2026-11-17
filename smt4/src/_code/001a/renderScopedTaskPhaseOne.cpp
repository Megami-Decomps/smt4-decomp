#include "shard/JobWork.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
s32 gxPackFadeKindAlphaWord(u32, f32);
s32 renderCtxPackPassFlags(u32, u32);
s32 packNibblesAndByte(u32, u32, u32);
void taskRunPhase(u32);
void renderCtxResetColorScale(RenderCtx *);

s32 renderScopedTaskPhaseOne(u32 job)
{
    jobGetWork(job);
    RenderCtx *context = g_titleScene;
    s32 state = gxPackFadeKindAlphaWord(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    context = g_titleScene;
    state = renderCtxPackPassFlags(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_titleScene;
    state = packNibblesAndByte(6, 1, 0);
    renderStackPush(&context->stackB, state);
    taskRunPhase(1);
    renderStackPop(&g_titleScene->stackB);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->additional.stackC);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    renderCtxSelectStereoLayout(g_titleScene);
    return 0;
}
}

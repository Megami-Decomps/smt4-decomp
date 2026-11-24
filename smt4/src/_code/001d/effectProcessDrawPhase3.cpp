#include "shard/JobWork.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
u32 gxPackFadeKindAlphaWord(u32, f32);
s32 packNibblesAndByte(u32, u32, u32);
void taskRunPhase(s32);
void renderCtxResetColorScale(RenderCtx *);

s32 effectProcessDrawPhase3(u32 job)
{
    jobGetWork(job);
    RenderCtx *context = g_titleScene;
    s32 state = gxPackFadeKindAlphaWord(6, 0.0f);
    renderStackPush(context->stacks + RENDER_STACK_C, state);
    context = g_titleScene;
    state = renderCtxPackPassFlags(1, 0);
    renderStackPush(context->stacks + RENDER_STACK_A, state);
    context = g_titleScene;
    state = packNibblesAndByte(6, 1, 0);
    renderStackPush(context->stacks + RENDER_STACK_B, state);
    taskRunPhase(3);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_C);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    renderCtxSelectStereoLayout(g_titleScene);
    return 0;
}
}

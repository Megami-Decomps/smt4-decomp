#include "camp/RenderCtx.h"
#include "shard/JobWork.h"

extern "C" {
extern RenderCtx *g_titleScene;
s32 FUN_002865c0(u32 mode, f32 alpha);
s32 FUN_002c5d80(u32 first, u32 second);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
void taskRunPhase(u32 phase);
void FUN_002c18e4(RenderCtx *context);

s32 FUN_001aa4a8(u32 job)
{
    jobGetWork(job);
    RenderCtx *context = g_titleScene;
    renderCtxPushC(context, FUN_002865c0(6, 0.0f));
    context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 0));
    context = g_titleScene;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    taskRunPhase(0);
    renderStackPop(&g_titleScene->stackB);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->additional.stackC);
    renderCtxApplyTransforms(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return 0;
}
}

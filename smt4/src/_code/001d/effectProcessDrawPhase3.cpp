/* NON_MATCHING: only the three renderStackPush address/scratch-register schedules differ; an optimization flag may explain them. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
u32 jobGetWork(u32);
u32 FUN_002865c0(u32, f32);
s32 FUN_002c5d80(u32, u32);
s32 packNibblesAndByte(u32, u32, u32);
void taskRunPhase(s32);
void FUN_002c198c(RenderCtx *);
void FUN_002c18e4(RenderCtx *);
void FUN_002c39a4(RenderCtx *);

u32 effectProcessDrawPhase3(u32 job)
{
    jobGetWork(job);
    RenderCtx *context = g_titleScene;
    s32 state = FUN_002865c0(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    context = g_titleScene;
    state = FUN_002c5d80(1, 0);
    renderStackPush(&context->stackA, state);
    context = g_titleScene;
    state = packNibblesAndByte(6, 1, 0);
    renderStackPush(&context->stackB, state);
    taskRunPhase(3);
    renderStackPop(&g_titleScene->stackB);
    renderStackPop(&g_titleScene->stackA);
    renderStackPop(&g_titleScene->additional.stackC);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    FUN_002c39a4(g_titleScene);
    return 0;
}
}

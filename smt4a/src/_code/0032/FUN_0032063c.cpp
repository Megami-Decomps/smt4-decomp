#include "shard/S1ListPanel.h"
#include "util/BitsAndBytes.h"
#include "shard/JobWork.h"
extern "C" {
extern RenderCtxA *g_renderCtx;
u32 FUN_00387580(u32 compare, f32 reference);
u32 FUN_001692ac(u32 mode, u32 flags);
void FUN_00182540(u32 object);

// Draw callback: draws the job's object with temporary raster, blend and depth-state overrides.
s32 FUN_0032063c(u32 job)
{
    struct DrawWork { u8 prefix[0xC]; u32 object; u8 enabled; };
    DrawWork *work = (DrawWork *)jobGetWork(job);
    if (work->enabled) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_00387580(6, 0.0f);
        renderStackPush(&context->additional.stackC, state);
        context = g_renderCtx;
        state = FUN_001692ac(1, 0);
        renderCtxPushA(context, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(&context->stackB, state);
        FUN_00182540(work->object);
        renderStackPop(&g_renderCtx->stackB);
        renderStackPop(&g_renderCtx->stackA);
        renderStackPop(&g_renderCtx->additional.stackC);
    }
    return 0;
}
}

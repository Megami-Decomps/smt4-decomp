/* NON_MATCHING: register allocation only: retail keeps the job work in r5 and the zero for the dirty-flag stores in r6; ours swaps them. */
#include "shard/S1ListPanel.h"
#include "util/BitsAndBytes.h"
#include "shard/JobWork.h"
extern "C" {
extern RenderCtxA *g_renderCtx;
u32 FUN_00387580(u32 compare, f32 reference);
u32 FUN_001692ac(u32 mode, u32 flags);
void FUN_00182540(u32 object);

s32 FUN_0032063c(u32 job)
{
    struct DrawWork { u8 prefix[0xC]; u32 object; u8 enabled; };
    struct AlphaTestContextView { u8 prefix[0x1278]; RenderStateStack alphaTest; };
    typedef char AlphaTestStateOffset[offsetof(AlphaTestContextView, alphaTest) == 0x1278 ? 1 : -1];
    DrawWork *work = (DrawWork *)jobGetWork(job);
    if (work->enabled) {
        renderCtxPushC(g_renderCtx, FUN_00387580(6, 0.0f));
        renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
        renderCtxPushB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        FUN_00182540(work->object);
        renderStackPop(&g_renderCtx->stackB);
        renderStackPop(&g_renderCtx->stackA);
        renderStackPop(&g_renderCtx->additional.stackC);
    }
    return 0;
}
}

/* NON_MATCHING: cache receiver offsets compute before packed-state calls; push/pop index scheduling differs. */
#include "shard/S1ListPanel.h"
extern "C" {
extern RenderCtxA *g_renderCtx;
void *jobGetWork(void);
u32 FUN_00387580(u32 compare, f32 reference);
u32 FUN_001692ac(u32 mode, u32 flags);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);
void FUN_00182540(u32 object);

u32 FUN_0032063c(void)
{
    struct DrawWork { u8 prefix[0xC]; u32 object; u8 enabled; };
    struct AlphaTestContextView { u8 prefix[0x1278]; RenderStateStack alphaTest; };
    typedef char AlphaTestStateOffset[offsetof(AlphaTestContextView, alphaTest) == 0x1278 ? 1 : -1];
    DrawWork *work = (DrawWork *)jobGetWork();
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

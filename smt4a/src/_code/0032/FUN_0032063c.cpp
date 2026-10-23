/* NON_MATCHING: cache receiver offsets compute before packed-state calls; push/pop index scheduling differs. */
#include "shard/S1ListPanel.h"
extern "C" {
extern RenderCtx *g_renderCtx;
void *jobGetWork(void);
u32 FUN_00387580(u32 compare, f32 reference);
u32 FUN_001692ac(u32 mode, u32 flags);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);
void FUN_00182540(u32 object);

u32 FUN_0032063c(void)
{
    struct DrawWork { u8 prefix[0xC]; u32 object; u8 enabled; };
    struct AlphaTestContextView { u8 prefix[0x1278]; RenderCtxCachedState alphaTest; };
    typedef char AlphaTestStateOffset[offsetof(AlphaTestContextView, alphaTest) == 0x1278 ? 1 : -1];
    DrawWork *work = (DrawWork *)jobGetWork();
    if (work->enabled) {
        ((AlphaTestContextView *)g_renderCtx)->alphaTest.push(FUN_00387580(6, 0.0f));
        g_renderCtx->drawStateView.state.push(FUN_001692ac(1, 0));
        g_renderCtx->blendStateView.state.push(packNibblesAndByte(6, 1, 0));
        FUN_00182540(work->object);
        g_renderCtx->blendStateView.state.pop();
        g_renderCtx->drawStateView.state.pop();
        ((AlphaTestContextView *)g_renderCtx)->alphaTest.pop();
    }
    return 0;
}
}

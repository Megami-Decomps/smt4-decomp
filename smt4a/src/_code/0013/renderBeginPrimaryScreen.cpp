#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {


extern void FUN_00144ab4(s32 target);
extern void asdGxFlushCommandBuffer(void);
extern void renderTargetClear(s32 a, s32 b);
extern void renderCtxResetFrameState(RenderCtxA *ctx);
extern void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *ctx);

s32 renderBeginPrimaryScreen(void)
{
    FUN_00144ab4(0);
    renderCtxSetStereoMode(g_renderCtx, 0);
    asdGxFlushCommandBuffer();
    renderTargetClear(0, 0);
    renderCtxResetFrameState(g_renderCtx);
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    return 0;
}

} /* extern "C" */

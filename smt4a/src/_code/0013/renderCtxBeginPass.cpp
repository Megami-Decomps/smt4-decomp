/* If the pending-draw check reports 1 and the flag at g_titleFlags+1 is set, starts a draw pass
 * on the draw context. */
#include "common.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"

extern "C" {
int asdGxFlushCommandBuffer(void);
int renderTargetClear(int a, int b);
int FUN_00144ab4(int arg);
int renderCtxResetFrameState(RenderCtxA *ctx);

extern s8 g_titleFlags[];

extern int gxIsStereoscopic3dEnabled(void);

u32 renderCtxBeginPass(void)
{
    RenderCtxA *ctx;

    if (gxIsStereoscopic3dEnabled() == 1 && g_titleFlags[1] != 0) {
        FUN_00144ab4(1);
        ctx = g_renderCtx;
        ctx->unk052C = 1;
        asdGxFlushCommandBuffer();
        renderTargetClear(1, 0);
        renderCtxResetFrameState(g_renderCtx);
        renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    }
    return 0;
}

} /* extern "C" */

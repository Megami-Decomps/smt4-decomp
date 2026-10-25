#include "camp/RenderCtx.h"

extern "C" {


extern RenderCtxA *g_renderCtx;

extern void FUN_00144ab4(s32 target);
extern void FUN_0017dd80(void);
extern void renderTargetClear(s32 a, s32 b);
extern void FUN_001575cc(RenderCtxA *ctx);
extern void FUN_00157558(RenderCtxA *ctx);
void renderCtxSetStereoMode(RenderCtxA *ctx, u32 mode);

s32 renderBeginPrimaryScreen(void)
{
    FUN_00144ab4(0);
    renderCtxSetStereoMode(g_renderCtx, 0);
    FUN_0017dd80();
    renderTargetClear(0, 0);
    FUN_001575cc(g_renderCtx);
    FUN_00157558(g_renderCtx);
    return 0;
}

} /* extern "C" */

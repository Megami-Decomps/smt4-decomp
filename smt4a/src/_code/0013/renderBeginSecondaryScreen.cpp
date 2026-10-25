#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;

extern void FUN_00144ab4(s32 target);
extern void FUN_0017dd80(void);
extern void renderTargetClear(s32 a, s32 b);
extern void FUN_001575cc(RenderCtxA *ctx);
void renderCtxSetStereoMode(RenderCtxA *ctx, u32 mode);

/* Script command: prepares the secondary screen (target 2) and starts rendering it. */
u32 renderBeginSecondaryScreen(void)
{
    FUN_00144ab4(2);
    FUN_0017dd80();
    renderTargetClear(2, 0);
    renderCtxSetStereoMode(g_renderCtx, 2);
    FUN_001575cc(g_renderCtx);
    return 0;
}

} /* extern "C" */

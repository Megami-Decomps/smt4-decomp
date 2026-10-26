/* If the pending-draw check reports 1 and the flag at g_titleFlags+1 is set, starts a draw pass
 * on the draw context. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

int FUN_0017dd80(void);
int renderTargetClear(int a, int b);
int FUN_00144ab4(int arg);
int FUN_001575cc(RenderCtxA *ctx);

extern s8 g_titleFlags[];
extern RenderCtxA *g_renderCtx;

extern int FUN_001696f4(void);

u32 renderCtxBeginPass(void)
{
    RenderCtxA *ctx;

    if (FUN_001696f4() == 1 && g_titleFlags[1] != 0) {
        FUN_00144ab4(1);
        ctx = g_renderCtx;
        ctx->unk052C = 1;
        FUN_0017dd80();
        renderTargetClear(1, 0);
        FUN_001575cc(g_renderCtx);
        FUN_00157558(g_renderCtx);
    }
    return 0;
}

} /* extern "C" */

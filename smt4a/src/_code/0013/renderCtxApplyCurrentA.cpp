/* Passes the current value of FUN_00152f54 to the draw context, if there is one. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

int FUN_00145e24(RenderCtxA *ctx, u32 arg);
int FUN_00152f54(void);

extern RenderCtxA *g_renderCtx;

u32 renderCtxApplyCurrentA(void)
{
    if (FUN_00152f54() != 0) {
        FUN_00145e24(g_renderCtx, FUN_00152f54());
    }
    return 0;
}

} /* extern "C" */

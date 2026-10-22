#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;
void FUN_00157558(RenderCtxA *panel);
s32 FUN_00138890(void)
{
    FUN_00157558(g_renderCtx);
    return 0;
}

} /* extern "C" */

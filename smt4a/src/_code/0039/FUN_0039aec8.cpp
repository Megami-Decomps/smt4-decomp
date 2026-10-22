#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;
void *FUN_001575cc(void *context);
void FUN_0035b76c(void *context);

s32 FUN_0039aec8(void)
{
    FUN_0035b76c(FUN_001575cc(g_renderCtx));
    return 0;
}

} /* extern "C" */

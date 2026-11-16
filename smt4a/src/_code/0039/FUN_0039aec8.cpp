#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;
void *renderCtxResetFrameState(void *context);
void FUN_0035b76c(void *context);

s32 FUN_0039aec8(void)
{
    FUN_0035b76c(renderCtxResetFrameState(g_renderCtx));
    return 0;
}

} /* extern "C" */

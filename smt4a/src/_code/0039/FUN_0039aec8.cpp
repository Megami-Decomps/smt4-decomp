#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
void *renderCtxResetFrameState(void *context);
void FUN_0035b76c(void *context);

s32 FUN_0039aec8(void)
{
    FUN_0035b76c(renderCtxResetFrameState(g_renderCtx));
    return 0;
}

} /* extern "C" */

#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
s32 FUN_001380f8(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    return 0;
}

} /* extern "C" */

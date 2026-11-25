#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
s32 FUN_001388ac(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    return 0;
}

} /* extern "C" */

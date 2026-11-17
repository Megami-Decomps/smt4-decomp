#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *panel);
s32 FUN_001380dc(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    return 0;
}

} /* extern "C" */

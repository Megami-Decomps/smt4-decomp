#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *panel);
s32 FUN_001380f8(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    return 0;
}

} /* extern "C" */

#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;
void renderEditorSceneDrawOverlay(void);

s32 FUN_00388a40(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderEditorSceneDrawOverlay();
    return 0;
}

} /* extern "C" */

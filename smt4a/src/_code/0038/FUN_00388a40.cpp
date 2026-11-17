#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
void renderEditorSceneDrawOverlay(void);

s32 FUN_00388a40(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderEditorSceneDrawOverlay();
    return 0;
}

} /* extern "C" */

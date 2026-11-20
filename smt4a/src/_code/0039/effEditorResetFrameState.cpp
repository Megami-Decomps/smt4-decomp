#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
void *renderCtxResetFrameState(void *context);
void effectEditorDrawMenu(void *context);

s32 effEditorResetFrameState(void)
{
    effectEditorDrawMenu(renderCtxResetFrameState(g_renderCtx));
    return 0;
}

} /* extern "C" */

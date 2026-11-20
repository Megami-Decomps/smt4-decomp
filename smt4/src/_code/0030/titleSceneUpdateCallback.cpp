#include "common.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

void renderCtxResetFrameStacks(RenderCtx *scene);
void effectEditorDrawMenu();

/* Refreshes the title scene before advancing its UI callbacks. */
s32 titleSceneUpdateCallback()
{
    renderCtxResetFrameStacks(g_titleScene);
    effectEditorDrawMenu();
    return 0;
}

}

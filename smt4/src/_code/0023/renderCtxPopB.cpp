#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtx *g_titleScene;

/* Pops the title scene's state stack; when a change is pending or the new top differs, runs the callback and clears the pending flag. */
void renderCtxPopB(void)
{
    renderStackPop(&g_titleScene->stackB);
}

} /* extern "C" */

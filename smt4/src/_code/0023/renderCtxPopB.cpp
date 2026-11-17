#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

extern "C" {


/* Pops the title scene's state stack; when a change is pending or the new top differs, runs the callback and clears the pending flag. */
void renderCtxPopB(void)
{
    renderStackPop(&g_titleScene->stackB);
}

} /* extern "C" */

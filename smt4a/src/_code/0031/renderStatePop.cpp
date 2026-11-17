#include "camp/RenderCtxA.h"

extern "C" {


/* Pops a render state; when the state below differs (or the stack is dirty) it is applied. */
void renderStatePop(void)
{
    renderStackPop(&g_renderCtx->stackB);
}

} /* extern "C" */

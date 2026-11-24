#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "code/Code0030.h"

extern "C" {

/* Draw mode three with the indexed state, restoring the previous render state. */
void titleSceneDrawEffectMenuHandler3(void)
{
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 1);
    renderStackPush(context->stacks + RENDER_STACK_A, state);
    renderCtxSelectTexture(g_renderCtx, 0);
    effMenuCallHandler(3, 1);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}
}

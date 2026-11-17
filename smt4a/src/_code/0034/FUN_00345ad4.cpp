#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
s32 renderCtxPackPassFlags(u32 index, s32 enabled);
int FUN_00300100(int mode, int enabled);

/* Draw mode three with the indexed state, restoring the previous render state. */
void FUN_00345ad4(void)
{
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlags(1, 1);
    renderStackPush(&context->stackA, state);
    renderCtxSelectTexture(g_renderCtx, 0);
    FUN_00300100(3, 1);
    renderStackPop(&g_renderCtx->stackA);
}
}

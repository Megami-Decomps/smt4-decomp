/* Calls camSetMatrixA on the draw context with `arg`. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

int camSetMatrixA(RenderCtxA *ctx, u32 arg);

extern RenderCtxA *g_renderCtx;

void renderCtxCallB(u32 arg)
{
    camSetMatrixA(g_renderCtx, arg);
}

} /* extern "C" */

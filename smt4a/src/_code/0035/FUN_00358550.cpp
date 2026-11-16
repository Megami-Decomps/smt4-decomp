#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
namespace {
inline void pushRasterState(RenderCtxA *context, s32 state)
{
    renderStackPush(&context->additional.stackC, state);
}
inline void pushDepthState(RenderCtxA *context, s32 state)
{
    renderStackPush(&context->stackB, state);
}
}
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 renderCtxPackPassFlagsWithAlpha(u32 mode, f32 parameter);
s32 renderCtxPackPassFlags(u32 first, u32 second);
void eplUpdateActiveNodes();

// Draw the effect pass with temporary raster, blend and depth-state overrides.
u32 FUN_00358550()
{
    RenderCtxA *context = g_renderCtx;
    pushRasterState(context, renderCtxPackPassFlagsWithAlpha(6, 0.0f));
    context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    context = g_renderCtx;
    pushDepthState(context, packNibblesAndByte(6, 1, 0));
    eplUpdateActiveNodes();
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->additional.stackC);
    return 0;
}
}

/* NON_MATCHING: only the three stack pushes' old/new entry address registers and load scheduling differ; 119 instructions each. */
#include "camp/RenderCtx.h"
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
s32 FUN_00387580(u32 mode, f32 parameter);
s32 FUN_001692ac(u32 first, u32 second);
u32 packNibblesAndByte(u32 first, u32 second, u32 byte);
void FUN_002b74cc();

// Draw the effect pass with temporary raster, blend and depth-state overrides.
u32 FUN_00358550()
{
    RenderCtxA *context = g_renderCtx;
    pushRasterState(context, FUN_00387580(6, 0.0f));
    context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    context = g_renderCtx;
    pushDepthState(context, packNibblesAndByte(6, 1, 0));
    FUN_002b74cc();
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->additional.stackC);
    return 0;
}
}

#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"
extern "C" {
s32 renderCtxPackPassFlagsWithAlpha(u32 kind, f32 value);
void eplUpdateActiveNodes(void);

u32 FUN_00358734(void)
{
    RenderCtxA *context = g_renderCtx;
    s32 state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
    renderStackPush(context->stacks + RENDER_STACK_C, state);
    context = g_renderCtx;
    state = renderCtxPackPassFlags(1, 0);
    renderCtxPushA(context, state);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 1, 0);
    renderStackPush(context->stacks + RENDER_STACK_B, state);
    eplUpdateActiveNodes();
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    return 0;
}
}

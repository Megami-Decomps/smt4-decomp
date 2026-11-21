#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"
struct RenderStateScopeWork { u8 prefix[0xC]; u32 state; };
extern "C" {
s32 renderCtxPackPassFlagsWithAlpha(u32 mode, f32 value);
s32 renderCtxPackPassFlags(u32 first, u32 second);

u32 FUN_004ce7c4(RenderStateScopeWork *work)
{
    if (work->state - 2 < 3) {
        RenderCtxA *context = g_renderCtx;
        s32 state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
        renderStackPush(context->stacks + RENDER_STACK_C, state);
        context = g_renderCtx;
        state = renderCtxPackPassFlags(1, 0);
        renderStackPush(context->stacks + RENDER_STACK_A, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(context->stacks + RENDER_STACK_B, state);
        context = g_renderCtx;
        renderStackPop(context->stacks + RENDER_STACK_B);
        context = g_renderCtx;
        renderStackPop(context->stacks + RENDER_STACK_A);
        context = g_renderCtx;
        renderStackPop(context->stacks + RENDER_STACK_C);
    }
    return 0;
}
}

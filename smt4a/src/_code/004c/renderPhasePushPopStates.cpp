#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"
struct RenderPhase {
    u8 unk00[0xc];
    u32 phase;
};
extern "C" {
s32 renderCtxPackPassFlagsWithAlpha(u32, f32);
s32 renderCtxPackPassFlags(u32, u32);

u32 renderPhasePushPopStates(RenderPhase *owner)
{
    if (owner->phase - 2 < 3) {
        RenderCtxA *context = g_renderCtx;
        s32 state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
        renderStackPush(context->stacks + RENDER_STACK_C, state);
        context = g_renderCtx;
        state = renderCtxPackPassFlags(1, 0);
        renderStackPush(context->stacks + RENDER_STACK_A, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(context->stacks + RENDER_STACK_B, state);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    }
    return 0;
}
}

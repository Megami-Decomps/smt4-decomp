#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"
struct RenderStateScopeWork { u8 prefix[0xC]; u32 state; };
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_00387580(u32 mode, f32 value);
s32 FUN_001692ac(u32 first, u32 second);

u32 FUN_004ce7c4(RenderStateScopeWork *work)
{
    if (work->state - 2 < 3) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_00387580(6, 0.0f);
        renderStackPush(&context->additional.stackC, state);
        context = g_renderCtx;
        state = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(&context->stackB, state);
        context = g_renderCtx;
        renderStackPop(&context->stackB);
        context = g_renderCtx;
        renderStackPop(&context->stackA);
        context = g_renderCtx;
        renderStackPop(&context->additional.stackC);
    }
    return 0;
}
}

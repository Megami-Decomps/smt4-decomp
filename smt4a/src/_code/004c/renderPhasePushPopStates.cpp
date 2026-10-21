/* NON_MATCHING: inlined push helpers schedule next-entry addresses and scratch registers differently; -O2 candidate. */
#include "camp/RenderCtx.h"

struct RenderPhase {
    u8 unk00[0xc];
    u32 phase;
};
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_00387580(u32, f32);
s32 FUN_001692ac(u32, u32);
s32 packNibblesAndByte(u32, u32, u32);

u32 renderPhasePushPopStates(RenderPhase *owner)
{
    if (owner->phase - 2 < 3) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_00387580(6, 0.0f);
        renderStackPush(&context->additional.stackC, state);
        context = g_renderCtx;
        state = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPush(&context->stackB, state);
        renderStackPop(&g_renderCtx->stackB);
        renderStackPop(&g_renderCtx->stackA);
        renderStackPop(&g_renderCtx->additional.stackC);
    }
    return 0;
}
}

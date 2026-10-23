/* NON_MATCHING: three render-stack push address/register scheduling differences remain. */
#include "camp/RenderCtx.h"
extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_00387580(u32 kind, f32 value);
s32 FUN_001692ac(u32 mode, u32 flags);
s32 packNibblesAndByte(u32 low, u32 high, u32 byte);
void FUN_002b74cc(void);

u32 FUN_00358734(void)
{
    RenderCtxA *context = g_renderCtx;
    s32 state = FUN_00387580(6, 0.0f);
    renderStackPush(&context->additional.stackC, state);
    context = g_renderCtx;
    state = FUN_001692ac(1, 0);
    renderCtxPushA(context, state);
    context = g_renderCtx;
    state = packNibblesAndByte(6, 1, 0);
    renderStackPush(&context->stackB, state);
    FUN_002b74cc();
    renderStackPop(&g_renderCtx->stackB);
    renderStackPop(&g_renderCtx->stackA);
    renderStackPop(&g_renderCtx->additional.stackC);
    return 0;
}
}

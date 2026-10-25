#include "camp/RenderCtx.h"

struct HunterDatabaseDrawView {
    u32 unk00;
    u8 state;
};
extern "C" {
void FUN_00157558(RenderCtxA *);
void efctSetSpeed(f32);
void renderCtxResetColorScale(RenderCtxA *);
void FUN_004058b0(HunterDatabaseDrawView *);
extern RenderCtxA *g_renderCtx;
u32 packNibblesAndByte(u32, u32, u32);
u32 FUN_001692ac(u32, u32);

// Draw the database with a temporary draw state, then restore blending and color.
u32 hunterDatabaseDrawWithState(HunterDatabaseDrawView *work)
{
    if (work->state == 0 || work->state == 1)
        return 0;
    FUN_00157558(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    FUN_004058b0(work);
    efctSetSpeed(1.0f);
    renderStackPop(&g_renderCtx->stackA);
    context = g_renderCtx;
    s32 blendState = packNibblesAndByte(6, 7, 0);
    renderStackSetCounted(&context->stackB, blendState);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

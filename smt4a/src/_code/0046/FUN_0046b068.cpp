/* NON_MATCHING: State-stack push destination calculation and load/store scheduling differ. */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;

void FUN_00157558(RenderCtxA *context);
void FUN_00183bb0();
s32 FUN_001692ac(u32 mode, u32 option);
void FUN_0016c4b8(RenderCtxA *context, u32 option);
void FUN_0046a108(void *subject);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

void FUN_0046b068(void *subject)
{
    FUN_00157558(g_renderCtx);
    FUN_00183bb0();

    RenderCtxA *context = g_renderCtx;
    s32 requested = FUN_001692ac(1, 0);
    renderStackPush(&context->stackA, requested);

    FUN_0016c4b8(g_renderCtx, 0);
    FUN_0046a108(subject);

    renderStackPop(&g_renderCtx->stackA);

    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}

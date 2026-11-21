#include "common.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"

extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *context);
void gxResetColorQuadToWhite();
s32 renderCtxPackPassFlags(u32 mode, u32 option);
void FUN_0046a108(void *subject);
void skinObjectUpdateMatrices(RenderCtxA *context);
void renderCtxResetColorScale(RenderCtxA *context);

void FUN_0046b068(void *subject)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    gxResetColorQuadToWhite();

    RenderCtxA *context = g_renderCtx;
    s32 requested = renderCtxPackPassFlags(1, 0);
    renderStackPush(context->stacks + RENDER_STACK_A, requested);

    renderCtxSelectTexture(g_renderCtx, 0);
    FUN_0046a108(subject);

    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);

    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
}
}

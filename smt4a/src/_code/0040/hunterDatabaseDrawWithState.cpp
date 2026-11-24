#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"
#include "shard/SpriteDetailPanel.h"

extern "C" {
void renderCtxSelectDisplayAreaForStereoMode(RenderCtxA *);
void efctSetSpeed(f32);
void renderCtxResetColorScale(RenderCtxA *);

// Draw the database with a temporary draw state, then restore blending and color.
u32 hunterDatabaseDrawWithState(SpriteDetailPanel *work)
{
    if (work->stage == 0 || work->stage == 1)
        return 0;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    spriteDetailPanelDraw(work);
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    context = g_renderCtx;
    s32 blendState = packNibblesAndByte(6, 7, 0);
    renderStackSetCounted(context->stacks + RENDER_STACK_B, blendState);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
}

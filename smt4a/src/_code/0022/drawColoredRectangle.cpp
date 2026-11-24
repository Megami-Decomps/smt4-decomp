#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxA.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {

/* Draws the rectangle in its colour at `depth` under a temporary render-state preset. */
static __inline void drawColoredRectangle(const ColoredRectangle *box, f32 depth)
{
    u32 color = ((u32)box->rgba[0] << 24) | ((u32)box->rgba[1] << 16) | ((u32)box->rgba[2] << 8) | box->rgba[3];
    renderCtxSelectTexture(g_renderCtx, 0);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 0));
    gxSubmitDrawZeroExtraParams(box->left, box->top, box->right - box->left, box->bottom - box->top,
                                color, color, color, depth, color);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}

// Draw a uniformly colored rectangle under a temporary render-state preset.
void drawColoredRectangle(const ColoredRectangle *rectangle)
{
    drawColoredRectangle(rectangle, 0.0f);
}
}

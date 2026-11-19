#include "ui/UiSpriteApi.h"
#include "gfx/ColoredQuad.h"
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "camp/RenderCtxTitle.h"

extern "C" {
u32 renderCtxPackPassFlags(u32 mode, bool enabled);

/* Draws the rectangle in its colour at `depth` under a temporary render-state preset. */
static __inline void drawColoredRectangle(const ColoredRectangle *box, f32 depth)
{
    u32 color = ((u32)box->rgba[0] << 24) | ((u32)box->rgba[1] << 16) | ((u32)box->rgba[2] << 8) | box->rgba[3];
    renderCtxSelectTexture(g_titleScene, 0);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, false));
    gxSubmitDrawZeroExtraParams(box->left, box->top, box->right - box->left, box->bottom - box->top,
                                color, color, color, depth, color);
    renderStackPop(&g_titleScene->stackA);
}

// Draw a uniformly colored rectangle under a temporary render-state preset.
void drawColoredRectangle(const ColoredRectangle *rectangle)
{
    drawColoredRectangle(rectangle, 0.0f);
}
}

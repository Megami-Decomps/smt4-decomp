#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern RenderCtx *g_titleScene;
u32 FUN_002c5d80(u32 mode, bool enabled);
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);

/* Draws the rectangle in its colour at `depth` under a temporary render-state preset. */
static __inline void drawColoredRectangle(const ColoredRectangle *box, f32 depth)
{
    u32 color = ((u32)box->rgba[0] << 24) | ((u32)box->rgba[1] << 16) | ((u32)box->rgba[2] << 8) | box->rgba[3];
    renderCtxSelectTexture(g_titleScene, 0);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, false));
    FUN_002c0944(color, color, color, color,
                 box->left, box->top, box->right - box->left, box->bottom - box->top, depth);
    renderStackPop(&g_titleScene->stackA);
}

// Draw a uniformly colored rectangle under a temporary render-state preset.
void drawColoredRectangle(const ColoredRectangle *rectangle)
{
    drawColoredRectangle(rectangle, 0.0f);
}
}

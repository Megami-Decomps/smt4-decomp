/* NON_MATCHING: the depth is an inline parameter now (zero kept in s16 like retail); remaining diff: packed colour in r0/alpha via r5 where retail loads the word into r1 and the alpha byte from r0, and the colour/float argument moves are ordered differently. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32, u32);
void FUN_0014e314(u32, u32, u32, u32, f32, f32, f32, f32, f32);

struct ColoredRectangleView {
    u32 color;
    u32 unk04;
    f32 left, top, right, bottom;
};

/* Draws the rectangle in its packed colour at `depth` under a temporary render-state preset. */
static __inline void drawColoredRectangle(const ColoredRectangleView *box, f32 depth)
{
    u32 packed = box->color;
    u8 alpha = reinterpret_cast<const u8 *>(&box->color)[3];
    u32 color = (packed << 24) | (((packed >> 8) & 0xff) << 16) |
                (((packed >> 16) & 0xff) << 8) | alpha;
    renderCtxSelectTexture(g_renderCtx, 0);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    FUN_0014e314(color, color, color, color,
                box->left, box->top, box->right - box->left, box->bottom - box->top, depth);
    renderStackPop(&g_renderCtx->stackA);
}

// Draw a uniformly colored rectangle under a temporary render-state preset.
void FUN_00221ddc(const void *rectangle)
{
    drawColoredRectangle(static_cast<const ColoredRectangleView *>(rectangle), 0.0f);
}
}

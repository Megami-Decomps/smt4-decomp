/* NON_MATCHING: rectangle depth corrected to retail 0.0f; its saved VFP lifetime and color argument forwarding still differ. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32, u32);
void FUN_0014e314(u32, u32, u32, u32, f32, f32, f32, f32, f32);

// Draw a uniformly colored rectangle under a temporary render-state preset.
void FUN_00221ddc(const void *rectangle)
{
    struct ColoredRectangleView {
        u32 color;
        u32 unk04;
        f32 left, top, right, bottom;
    };
    const ColoredRectangleView *box = static_cast<const ColoredRectangleView *>(rectangle);
    u32 packed = box->color;
    u8 alpha = reinterpret_cast<const u8 *>(&box->color)[3];
    u32 color = (packed << 24) | (((packed >> 8) & 0xff) << 16) |
                (((packed >> 16) & 0xff) << 8) | alpha;
    renderCtxSelectTexture(g_renderCtx, 0);
    RenderCtxA *context = g_renderCtx;
    renderCtxPushA(context, FUN_001692ac(1, 0));
    FUN_0014e314(color, color, color, color,
                box->left, box->top, box->right - box->left, box->bottom - box->top, 0.0f);
    renderStackPop(&g_renderCtx->stackA);
}
}

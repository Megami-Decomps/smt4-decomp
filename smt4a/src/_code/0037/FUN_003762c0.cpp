/* NON_MATCHING: color channel conversion folds to REV, while cached draw-state push/pop and offset arithmetic are scheduled differently. */
#include "shard/S1ListPanel.h"

static __inline u32 rectangleColorToNative(u32 color)
{
    return (color >> 24) | ((color & 255) << 24) |
        (((color >> 8) & 255) << 16) | (((color >> 16) & 255) << 8);
}

extern "C" {
extern RenderCtxA *g_renderCtx;
extern f32 g_uiDrawOffset[2];
u32 FUN_001692ac(u32 mode, u32 enabled);
void FUN_0016c4b8(RenderCtxA *context, u32 mode);
void FUN_0014e314(u32 colorA, u32 colorB, u32 colorC, u32 colorD,
    f32 x, f32 y, f32 width, f32 height, f32 depth);
void FUN_002e0924(u32 colorA, u32 colorB, u32 colorC, u32 colorD,
    f32 x, f32 y, f32 width, f32 height, f32 depth, f32 thickness);

void FUN_003762c0(s32 x, s32 y, s32 width, s32 height, u32 outlineColor, u32 fillColor)
{
    RenderCtxA *context = g_renderCtx;
    s32 drawX = (s32)((f32)x + g_uiDrawOffset[0]);
    s32 drawY = (s32)((f32)y + g_uiDrawOffset[1]);
    renderCtxPushA(context, FUN_001692ac(1, 1));
    FUN_0016c4b8(g_renderCtx, 0);
    if (fillColor >> 24) {
        u32 color = rectangleColorToNative(fillColor);
        FUN_0014e314(color, color, color, color,
            (f32)drawX, (f32)drawY, (f32)width, (f32)height, 0.0f);
    }
    if (outlineColor >> 24) {
        u32 color = rectangleColorToNative(outlineColor);
        FUN_002e0924(color, color, color, color,
            (f32)drawX, (f32)drawY, (f32)width, (f32)height, 0.0f, 1.0f);
    }
    renderStackPop(&g_renderCtx->stackA);
}
}

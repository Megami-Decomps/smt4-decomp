/* NON_MATCHING: color channel conversion folds to REV, while cached draw-state push/pop and offset arithmetic are scheduled differently. */
#include "shard/S1ListPanel.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxA.h"

static __inline u32 rectangleColorToNative(u32 color)
{
    return (color >> 24) | ((color & 255) << 24) |
        (((color >> 8) & 255) << 16) | (((color >> 16) & 255) << 8);
}

extern "C" {
extern f32 g_uiDrawOffset[2];
u32 renderCtxPackPassFlags(u32 mode, u32 enabled);
void effectDrawRectOutline(u32 colorA, u32 colorB, u32 colorC, u32 colorD,
    f32 x, f32 y, f32 width, f32 height, f32 depth, f32 thickness);

void FUN_003762c0(s32 x, s32 y, s32 width, s32 height, u32 outlineColor, u32 fillColor)
{
    RenderCtxA *context = g_renderCtx;
    s32 drawX = (s32)(g_uiDrawOffset[0] + (f32)x);
    s32 drawY = (s32)(g_uiDrawOffset[1] + (f32)y);
    renderCtxPushA(context, renderCtxPackPassFlags(1, 1));
    renderCtxSelectTexture(g_renderCtx, 0);
    if (fillColor >> 24) {
        u32 color = rectangleColorToNative(fillColor);
        gxSubmitDrawZeroExtraParams((f32)drawX, (f32)drawY, (f32)width, (f32)height,
                                    color, color, color, 0.0f, color);
    }
    if (outlineColor >> 24) {
        u32 color = rectangleColorToNative(outlineColor);
        effectDrawRectOutline(color, color, color, color,
            (f32)drawX, (f32)drawY, (f32)width, (f32)height, 0.0f, 1.0f);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}
}

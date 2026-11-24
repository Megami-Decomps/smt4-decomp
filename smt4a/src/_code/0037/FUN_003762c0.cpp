/* NON_MATCHING: written as IV's twin menuDrawRectangle, with the same 18 lines left: the origin adds take their operands in
 * the other order (vadd s0, s2, s0), the colour bytes g/b swap r1/r2 in the unpacking, and one colour move is scheduled
 * before the depth move. */
#include "shard/S1ListPanel.h"
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtxA.h"
#include "shard/Shard0036.h"

static __inline u32 packMenuColor(u32 r, u32 g, u32 b, u32 a)
{
    return (r << 24) | (g << 16) | (b << 8) | a;
}

extern "C" {
extern f32 g_uiDrawOffset[2];
void effectDrawRectOutline(u32 colorA, u32 colorB, u32 colorC, u32 colorD,
    f32 x, f32 y, f32 width, f32 height, f32 depth, f32 thickness);

void FUN_003762c0(s32 x, s32 y, s32 width, s32 height, u32 outlineColor, u32 fillColor)
{
    RenderCtxA *context = g_renderCtx;
    RgbaWord fill;
    fill.word = fillColor;
    RgbaWord outline;
    outline.word = outlineColor;
    s32 drawX = (s32)(g_uiDrawOffset[0] + (f32)x);
    s32 drawY = (s32)(g_uiDrawOffset[1] + (f32)y);
    renderCtxPushA(context, renderCtxPackPassFlags(1, 1));
    renderCtxSelectTexture(g_renderCtx, 0);
    u32 fillR = fill.rgba.r, fillG = fill.rgba.g, fillB = fill.rgba.b, fillA = fill.rgba.a;
    if (fillA != 0) {
        u32 color = packMenuColor(fillR, fillG, fillB, fillA);
        gxSubmitDrawZeroExtraParams((f32)drawX, (f32)drawY, (f32)width, (f32)height,
                                    color, color, color, 0.0f, color);
    }
    u32 outR = outline.rgba.r, outG = outline.rgba.g, outB = outline.rgba.b, outA = outline.rgba.a;
    if (outA != 0) {
        u32 color = packMenuColor(outR, outG, outB, outA);
        effectDrawRectOutline(color, color, color, color,
            (f32)drawX, (f32)drawY, (f32)width, (f32)height, 0.0f, 1.0f);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
}
}

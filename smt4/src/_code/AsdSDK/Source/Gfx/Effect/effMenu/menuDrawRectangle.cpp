/* NON_MATCHING: 18 lines; frame, stack-argument ldm and call sequence match. The origin adds take their operands in the
 * other order (vadd s0, s2, s0), the colour bytes g/b swap r1/r2 in the unpacking, and one colour move is scheduled
 * before the depth move. */
#include "shard/W6_W6Match7_MenuRectangle.h"
#include "gfx/ColoredQuad.h"
#include "camp/RenderCtx.h"
#include "shard/Shard0036.h"
#include "camp/RenderCtxTitle.h"

struct AsdTexture;

extern "C" {
extern MenuDrawPoint DAT_004724cc;

u32 renderCtxPackPassFlags(u32 value, bool enabled);
void FUN_0021025c(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth, f32 lineWidth);
}

static inline u32 packMenuColor(u32 r, u32 g, u32 b, u32 a)
{
    return (r << 24) | (g << 16) | (b << 8) | a;
}

extern "C" void menuDrawRectangle(s32 x, s32 y, s32 width, s32 height,
                             u32 outlineColor, u32 fillColor)
{
    RenderCtx *context = g_titleScene;
    RgbaWord fill;
    fill.word = fillColor;
    RgbaWord outline;
    outline.word = outlineColor;
    s32 adjustedX = static_cast<s32>(static_cast<f32>(x) + DAT_004724cc.x);
    s32 adjustedY = static_cast<s32>(static_cast<f32>(y) + DAT_004724cc.y);
    renderCtxPushA(context, renderCtxPackPassFlags(1, true));
    renderCtxSelectTexture(g_titleScene, NULL);
    u32 fillR = fill.rgba.r, fillG = fill.rgba.g, fillB = fill.rgba.b, fillA = fill.rgba.a;
    if (fillA != 0) {
        u32 color = packMenuColor(fillR, fillG, fillB, fillA);
        gxSubmitDrawZeroExtraParams(static_cast<f32>(adjustedX), static_cast<f32>(adjustedY),
                                    static_cast<f32>(width), static_cast<f32>(height),
                                    color, color, color, 0.0f, color);
    }
    u32 outR = outline.rgba.r, outG = outline.rgba.g, outB = outline.rgba.b, outA = outline.rgba.a;
    if (outA != 0) {
        u32 color = packMenuColor(outR, outG, outB, outA);
        FUN_0021025c(color, color, color, color,
                     static_cast<f32>(adjustedX), static_cast<f32>(adjustedY),
                     static_cast<f32>(width), static_cast<f32>(height), 0.0f, 1.0f);
    }
    renderStackPop(&g_titleScene->stackA);
}

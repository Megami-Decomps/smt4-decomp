/* NON_MATCHING: colour unpacking now uses retail's shifts/masks hoisted ahead of the alpha test; remaining: argument/stack-argument register assignment (retail ldm of both stack arguments) and the FP addition operand order. */
#include "shard/W6_W6Match7_MenuRectangle.h"
#include "camp/RenderCtx.h"
#include "shard/Shard0036.h"

struct AsdTexture;

extern "C" {
extern RenderCtx *g_titleScene;
extern MenuDrawPoint DAT_004724cc;

u32 FUN_002c5d80(u32 value, bool enabled);
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);
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
    s32 adjustedX = static_cast<s32>(static_cast<f32>(x) + DAT_004724cc.x);
    s32 adjustedY = static_cast<s32>(static_cast<f32>(y) + DAT_004724cc.y);
    s32 state = FUN_002c5d80(1, true);
    renderStackPush(&context->stackA, state);
    renderCtxSelectTexture(g_titleScene, NULL);
    RgbaWord fill;
    fill.word = fillColor;
    u32 fillR = fill.rgba.r, fillG = fill.rgba.g, fillB = fill.rgba.b, fillA = fill.rgba.a;
    if (fillA != 0) {
        u32 color = packMenuColor(fillR, fillG, fillB, fillA);
        FUN_002c0944(color, color, color, color,
                     static_cast<f32>(adjustedX), static_cast<f32>(adjustedY),
                     static_cast<f32>(width), static_cast<f32>(height), 0.0f);
    }
    RgbaWord outline;
    outline.word = outlineColor;
    u32 outR = outline.rgba.r, outG = outline.rgba.g, outB = outline.rgba.b, outA = outline.rgba.a;
    if (outA != 0) {
        u32 color = packMenuColor(outR, outG, outB, outA);
        FUN_0021025c(color, color, color, color,
                     static_cast<f32>(adjustedX), static_cast<f32>(adjustedY),
                     static_cast<f32>(width), static_cast<f32>(height), 0.0f, 1.0f);
    }
    renderStackPop(&g_titleScene->stackA);
}

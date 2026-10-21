/* NON_MATCHING: MPCore emits REV/BIC for colors instead of retail shifts/masks; FP addition and stack scheduling/registers differ. */
#include "shard/W6_W6Match7_MenuRectangle.h"
#include "camp/RenderCtx.h"
#include "shard/Shard0036.h"

struct AsdTexture;

extern "C" {
extern RenderCtx *g_titleScene;
extern MenuDrawPoint DAT_004724cc;

u32 FUN_002c5d80(u32 value, bool enabled);
void FUN_002c1b64(RenderCtx *context, AsdTexture *texture);
void FUN_002c0944(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth);
void FUN_0021025c(u32 color0, u32 color1, u32 color2, u32 color3,
                  f32 x, f32 y, f32 width, f32 height, f32 depth, f32 lineWidth);
}

static inline u32 packMenuColor(const Rgba &color)
{
    return (static_cast<u32>(color.r) << 24) |
           (static_cast<u32>(color.g) << 16) |
           (static_cast<u32>(color.b) << 8) | color.a;
}

extern "C" void menuDrawRectangle(s32 x, s32 y, s32 width, s32 height,
                             u32 outlineColor, u32 fillColor)
{
    RenderCtx *context = g_titleScene;
    s32 adjustedX = static_cast<s32>(static_cast<f32>(x) + DAT_004724cc.x);
    s32 adjustedY = static_cast<s32>(static_cast<f32>(y) + DAT_004724cc.y);
    s32 state = FUN_002c5d80(1, true);
    renderStackPush(&context->stackA, state);
    FUN_002c1b64(g_titleScene, NULL);
    RgbaWord fill;
    fill.word = fillColor;
    if (fill.rgba.a != 0) {
        u32 color = packMenuColor(fill.rgba);
        FUN_002c0944(color, color, color, color,
                     static_cast<f32>(adjustedX), static_cast<f32>(adjustedY),
                     static_cast<f32>(width), static_cast<f32>(height), 0.0f);
    }
    RgbaWord outline;
    outline.word = outlineColor;
    if (outline.rgba.a != 0) {
        u32 color = packMenuColor(outline.rgba);
        FUN_0021025c(color, color, color, color,
                     static_cast<f32>(adjustedX), static_cast<f32>(adjustedY),
                     static_cast<f32>(width), static_cast<f32>(height), 0.0f, 1.0f);
    }
    renderStackPop(&g_titleScene->stackA);
}

/* NON_MATCHING: byte swaps no longer become REV and the 0.0 depth now lives in s18 like retail; remaining: width/height saved registers swap (retail height r5, width r6), the origin adds take their operands in the other order, and the swap shifts are scheduled differently. */
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "title/titleMain.h"
#include "shard/Shard0036.h"

extern "C" {
extern TitleScene *g_titleScene;
extern f32 g_effMenuDrawOffset[2];
s32 renderCtxPackPassFlags(u32 first, u32 second);
}

/* The colour with its byte order reversed (0xAABBGGRR <-> 0xRRGGBBAA). */
static inline u32 menuReverseColorBytes(u32 color)
{
    RgbaWord c;
    c.word = color;
    u32 r = c.rgba.r, g = c.rgba.g, b = c.rgba.b, a = c.rgba.a;
    return (r << 24) | (g << 16) | (b << 8) | a;
}

extern "C" {
// Apply the menu origin, truncate to pixel coordinates, and draw a two-color rectangle with preserved render state.
void effMenuDrawGradientRect(s32 x, s32 y, s32 width, s32 height, u32 firstColor, u32 secondColor)
{
    f32 depth = 0.0f;
    s32 pixelX = (s32)((f32)x + g_effMenuDrawOffset[0]);
    s32 pixelY = (s32)((f32)y + g_effMenuDrawOffset[1]);
    firstColor = menuReverseColorBytes(firstColor);
    secondColor = menuReverseColorBytes(secondColor);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 1));
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams((f32)pixelX, (f32)pixelY, (f32)width, (f32)height,
                                firstColor, firstColor, secondColor, depth, secondColor);
    renderStackPop(&g_titleScene->stackA);
}
}

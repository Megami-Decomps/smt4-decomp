/* NON_MATCHING: the origin adds now take retail's operand order (the float position adjusted in place); remaining:
 * width/height saved registers swap (retail height r5, width r6) and the two byte swaps are scheduled one after the
 * other where retail interleaves them. */
#include "camp/RenderCtx.h"
#include "gfx/ColoredQuad.h"
#include "ui/AnimatedMessage.h"
#include "title/titleMain.h"
#include "shard/Shard0036.h"

extern "C" {
extern TitleScene *g_titleScene;
extern f32 g_effMenuDrawOffset[2];
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
    f32 position[2] = {(f32)x, (f32)y};
    position[0] += g_effMenuDrawOffset[0];
    position[1] += g_effMenuDrawOffset[1];
    s32 pixelX = (s32)position[0];
    s32 pixelY = (s32)position[1];
    firstColor = menuReverseColorBytes(firstColor);
    secondColor = menuReverseColorBytes(secondColor);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 1));
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams((f32)pixelX, (f32)pixelY, (f32)width, (f32)height,
                                firstColor, firstColor, secondColor, depth, secondColor);
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
}
}

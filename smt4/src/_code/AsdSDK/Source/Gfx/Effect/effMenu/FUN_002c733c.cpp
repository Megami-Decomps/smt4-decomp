/* NON_MATCHING: byte swaps no longer become REV and the 0.0 depth now lives in s18 like retail; remaining: width/height saved registers swap (retail height r5, width r6), the origin adds take their operands in the other order, and the swap shifts are scheduled differently. */
#include "camp/RenderCtx.h"
#include "title/titleMain.h"

extern "C" {
extern TitleScene *g_titleScene;
extern f32 DAT_004724cc[2];
s32 renderCtxPackPassFlags(u32 first, u32 second);
void gxSubmitDrawZeroExtraParams(u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor, f32 x, f32 y, f32 width, f32 height, f32 depth);
}

/* The colour with its byte order reversed (0xAABBGGRR <-> 0xRRGGBBAA). */
static inline u32 menuReverseColorBytes(u32 color)
{
    u8 b0 = color;
    u8 b1 = color >> 8;
    u8 b2 = color >> 16;
    u8 b3 = color >> 24;
    return ((u32)b0 << 24) | ((u32)b1 << 16) | ((u32)b2 << 8) | b3;
}

extern "C" {
// Apply the menu origin, truncate to pixel coordinates, and draw a two-color rectangle with preserved render state.
void FUN_002c733c(s32 x, s32 y, s32 width, s32 height, u32 firstColor, u32 secondColor)
{
    f32 depth = 0.0f;
    s32 pixelX = (s32)((f32)x + DAT_004724cc[0]);
    s32 pixelY = (s32)((f32)y + DAT_004724cc[1]);
    firstColor = menuReverseColorBytes(firstColor);
    secondColor = menuReverseColorBytes(secondColor);
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, renderCtxPackPassFlags(1, 1));
    renderCtxSelectTexture(g_titleScene, 0);
    gxSubmitDrawZeroExtraParams(firstColor, firstColor, secondColor, secondColor,
        (f32)pixelX, (f32)pixelY, (f32)width, (f32)height, depth);
    renderStackPop(&g_titleScene->stackA);
}
}

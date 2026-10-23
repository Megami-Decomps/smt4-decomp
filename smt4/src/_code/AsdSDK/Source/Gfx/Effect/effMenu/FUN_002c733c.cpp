/* NON_MATCHING: byte reversal becomes REV; VFP constant lifetime, stack push address register and scheduling differ. */
#include "camp/RenderCtx.h"
#include "title/titleMain.h"

extern "C" {
extern TitleScene *g_titleScene;
extern f32 DAT_004724cc[2];
s32 FUN_002c5d80(u32 first, u32 second);
void FUN_002c1b64(void *context, u32 state);
void FUN_002c0944(u32 firstColor, u32 secondColor, u32 thirdColor, u32 fourthColor, f32 x, f32 y, f32 width, f32 height, f32 depth);
}

static inline u32 menuReverseColorBytes(u32 color)
{
    return (color << 24) | ((u32)(u8)(color >> 8) << 16) |
        ((u32)(u8)(color >> 16) << 8) | (color >> 24);
}

extern "C" {
// Apply the menu origin, truncate to pixel coordinates, and draw a two-color rectangle with preserved render state.
void FUN_002c733c(s32 x, s32 y, s32 width, s32 height, u32 firstColor, u32 secondColor)
{
    s32 pixelX = (s32)((f32)x + DAT_004724cc[0]);
    s32 pixelY = (s32)((f32)y + DAT_004724cc[1]);
    firstColor = menuReverseColorBytes(firstColor);
    secondColor = menuReverseColorBytes(secondColor);
    RenderCtx *context = (RenderCtx *)g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(1, 1));
    FUN_002c1b64(g_titleScene, 0);
    FUN_002c0944(firstColor, firstColor, secondColor, secondColor,
        (f32)pixelX, (f32)pixelY, (f32)width, (f32)height, 0.0f);
    renderStackPop(&((RenderCtx *)g_titleScene)->stackA);
}
}

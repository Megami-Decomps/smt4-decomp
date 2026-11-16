/* NON_MATCHING: with the draw body as its own helper the coordinate loads (ldrd) and push/pop scheduling match; only x/y swap saved registers (retail x r5, y r6). */
#include "gfx/UiControlDraw.h"
#include "shard/S1ListPanel.h"
#include "util/BitsAndBytes.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
void texDrawCompositeSprite(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 priority);

/* Draws the sprite at (x, y) with the given speed. */
static void markerDrawBody(s32 x, s32 y, f32 speed)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    efctSetSpeed(speed);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 0x2b, 6, x, y, 2);
    renderStackPop(&g_renderCtx->stackB);
    efctSetSpeed(1.0f);
}

/* Draw the marker with its local speed and restore the renderer's blend state. */
void FUN_0041c45c(const UiScaledDrawPosition *position, const SpriteInfo *sprite)
{
    markerDrawBody(position->x + sprite->x, position->y + sprite->y, position->speed);
}
}

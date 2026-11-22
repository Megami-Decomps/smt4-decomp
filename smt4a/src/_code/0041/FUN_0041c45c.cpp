/* NON_MATCHING: written in place, the draw is 39 lines off (frame and coordinate scheduling); a single-use static
 * helper holding the draw between the render push and pop came closer (only x/y swapped saved registers) but had no
 * evidence besides the score. */
#include "gfx/UiControlDraw.h"
#include "camp/RenderCtxA.h"
#include "shard/S1ListPanel.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
void texDrawCompositeSprite(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 priority);

/* Draws the marker at its position with its own speed, then restores the renderer's blend state and the speed. */
void FUN_0041c45c(const UiScaledDrawPosition *position, const TextureTableEntryIV *sprite)
{
    RenderCtxA *context = g_renderCtx;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    efctSetSpeed(position->speed);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 0x2b, 6, position->x + sprite->x, position->y + sprite->y, 2);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    efctSetSpeed(1.0f);
}
}

/* NON_MATCHING: the position snapshot matches the retail frame and timing. The build uses ldm instead of ldrd
 * for its two coordinates, allocating different input registers for the coordinate sums. */
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
    UiScaledDrawPosition draw = *position;
    draw.x += sprite->x;
    draw.y += sprite->y;
    RenderCtxA *context = g_renderCtx;
    renderCtxPushB(context, packNibblesAndByte(6, 1, 0));
    efctSetSpeed(draw.speed);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 0x2b, 6, draw.x, draw.y, 2);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
    efctSetSpeed(1.0f);
}
} /* extern "C" */

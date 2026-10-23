/* NON_MATCHING: coordinate-pair loads and cached-state push/pop scheduling differ from retail. */
#include "gfx/UiControlDraw.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern RenderCtx *g_renderCtx;
u32 packNibblesAndByte(u32 first, u32 second, u32 third);
void efctSetSpeed(f32 speed);
void FUN_00183bb0();
void FUN_00164b5c(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 priority);

/* Draw the marker with its local speed and restore the renderer's blend state. */
void FUN_0041c45c(const UiScaledDrawPosition *position, const SpriteInfo *sprite)
{
    s32 x = position->x + sprite->x;
    s32 y = position->y + sprite->y;
    f32 speed = position->speed;
    RenderCtx *context = g_renderCtx;
    context->blendStateView.state.push(packNibblesAndByte(6, 1, 0));
    efctSetSpeed(speed);
    FUN_00183bb0();
    FUN_00164b5c(2, 0x2b, 6, x, y, 2);
    g_renderCtx->blendStateView.state.pop();
    efctSetSpeed(1.0f);
}
}

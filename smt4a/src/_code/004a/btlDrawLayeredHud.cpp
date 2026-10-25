#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);
SpriteInfo *FUN_001834a4(u32 group, u32 image);
void FUN_0018152c(u32 value, s32 x, s32 y, s32 priority, s32 flags);

// Draw the layered HUD ornament with additive and normal-alpha blend sections.
void btlDrawLayeredHud(u32 context, s32 x, s32 y, u32 value, f32 speed)
{
    efctSetSpeed(speed);
    FUN_001835b4(2, 12, 131, x, y, 11);
    FUN_001835b4(2, 12, 132, x, y, 16);
    RenderCtxA *render = g_renderCtx;
    u32 blend = packNibblesAndByte(6, 1, 0);
    renderCtxSetB(render, blend);
    for (s32 index = 0; index < 3; ++index)
        FUN_001835b4(2, 12, index + 128, x, y, 21);
    render = g_renderCtx;
    blend = packNibblesAndByte(6, 7, 0);
    renderStackSet(&render->stackB, blend);
    SpriteInfo *layout = FUN_001834a4(12, 133);
    FUN_0018152c(value, layout->x + x, layout->y + y, 26, 0);
    efctSetSpeed(1.0f);
}
}

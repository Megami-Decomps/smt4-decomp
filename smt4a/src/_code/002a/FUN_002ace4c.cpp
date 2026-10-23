/* NON_MATCHING: cached-state object addresses are computed before state packing, and the panel speed field uses direct addressing. */
#include "shard/S1ListPanel.h"
#include "ui/PartyPanelState.h"

extern "C" {
extern RenderCtx *g_renderCtx;
extern PartyPanelStateA *g_partyPanel;
SpriteInfo *FUN_001834a4(u32 group, s32 id);
u32 packNibblesAndByte(u32 first, u32 second, u32 third);
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 layer, s32 group, s32 sprite, s32 x, s32 y, u32 color);

void FUN_002ace4c(s32 index, s32 x, s32 y, u32 color, s32 animated, f32 speed)
{
    PartyPanelStateA *panel = g_partyPanel;
    const SpriteInfo *sprite = FUN_001834a4(0x11, index + 0x2d);
    g_renderCtx->blendStateView.state.set(packNibblesAndByte(6, 1, 0));
    if (animated) {
        efctSetSpeed(panel->animation.effectSpeed * speed);
        FUN_001835b4(2, 0x11, 0x10, sprite->x + x, sprite->y + y, color);
        efctSetSpeed(1.0f);
    } else {
        efctSetSpeed(speed);
        FUN_001835b4(2, 0x11, 0xf, sprite->x + x, sprite->y + y, color);
        efctSetSpeed(1.0f);
    }
    g_renderCtx->blendStateView.state.set(packNibblesAndByte(6, 7, 0));
}
}

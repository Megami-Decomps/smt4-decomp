/* NON_MATCHING: scissor-state reloads fold, stack addresses and coordinate operands schedule differently; alternate optimization may preserve the retail shape. */
#include "shard/S1ListPanel.h"
#include "shard/SpriteDetailPanel.h"

extern "C" {
extern RenderCtxScissorA* g_renderCtx;
f32 renderCtxCalculateStereoParallax(RenderCtxA* context, f32 depth);
SpriteInfo* FUN_001834a4(u32 group, s32 sprite);
u32 FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
void FUN_00404dd0(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed);
void efctSetSpeed(f32 speed);
void FUN_001835b4(s32 layer, u32 group, s32 sprite, s32 x, s32 y, s32 priority);
u32 renderPopStateStacks(void);

void drawSpriteDetailPanelClipped(SpriteDetailPanel* panel, s32 x, s32 y, f32 speed)
{
    const s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
    const SpriteInfo* border = FUN_001834a4(0x32, 0x37);
    const s32 clipX = parallax + border->x;
    const s32 clipY = border->y;
    const s32 clipWidth = border->size[0];
    const s32 clipHeight = border->size[1];
    const bool suspended = renderCtxSuspendScissor(g_renderCtx);
    FUN_00168e00(clipX, clipY, clipWidth, clipHeight);

    if (panel->spriteGroup == 1) {
        efctSetSpeed(speed);
        const SpriteInfo* image = FUN_001834a4(0x32, 0x38);
        const s32 screenX = x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.26f);
        FUN_001835b4(2, panel->spriteGroup, panel->spriteId * 1000,
                     panel->anchor->x + image->x + screenX,
                     image->y + panel->anchor->y + y, 0x65);
        efctSetSpeed(1.0f);
    } else {
        FUN_00404dd0(panel, x, y, speed);
    }

    if (suspended) {
        renderCtxResumeScissor(g_renderCtx);
    }
    renderPopStateStacks();
}
}

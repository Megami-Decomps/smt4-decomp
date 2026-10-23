/* NON_MATCHING: direct opacity field loads replace retail's animated-scalar address setup and removed-hook NOPs. */
#include "shard/W5_W5Match4_BattleTransition.h"
#include "shard/S1ListPanel.h"

extern "C" {
const SpriteInfo *FUN_0018349c(const AsdTextureRegion *region, s32 image);
void efctSetSpeed(f32 opacity);
void FUN_004934ac(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color);
void FUN_0049368c(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color, u32 flags);

void FUN_004a7dc8(BattleTransitionState *work, s32 anchor, u32 color, s32 alternate)
{
    const SpriteInfo *frame = FUN_0018349c(&work->frameDraw.region, anchor + 0x42F);
    s32 x = frame->x;
    s32 y = frame->y;
    efctSetSpeed(work->frameDraw.opacity);
    FUN_004934ac(&work->frameDraw.region, 0x426, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x427, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x428, x, y, color);
    efctSetSpeed(1.0f);
    FUN_0049368c(&work->frameDraw.region, 0x429, x, y, color, 1);
    if (alternate) {
        FUN_004934ac(&work->frameDraw.region, 0x5CF, x, y, color);
        FUN_004934ac(&work->frameDraw.region, 0x5D0, x, y, color);
        FUN_004934ac(&work->frameDraw.region, 0x5D2, x, y, color);
        efctSetSpeed(work->secondaryElapsed);
        FUN_004934ac(&work->frameDraw.region, 0x5D1, x, y, color);
        efctSetSpeed(1.0f);
        return;
    }
    FUN_004934ac(&work->frameDraw.region, 0x42A, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x42B, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x5C9, x, y, color);
    efctSetSpeed(work->secondaryElapsed);
    FUN_004934ac(&work->frameDraw.region, 0x42C, x, y, color);
    efctSetSpeed(1.0f);
}
}

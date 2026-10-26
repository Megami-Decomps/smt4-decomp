#include "shard/W5_W5Match4_BattleTransition.h"
#include "shard/S1ListPanel.h"
#include "code/Code004a_Smt4a.h"

extern "C" {
const SpriteInfo *layoutFindTableEntry(const AsdTextureRegion *region, s32 image);
void efctSetSpeed(f32 opacity);
f32 vec2GetSpeed(const void *object);
void FUN_004934ac(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color);
void FUN_0049368c(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color, u32 flags);

/* The two animated scalars the draw reads: their speeds are the f32 at +0x20 of each object (opacity at 0x234, secondaryElapsed at 0x7AC). */
struct TransitionSpeedView {
    u8 unk000[0x214];
    u8 frameSpeed[0x24];
    u8 unk238[0x554];
    u8 secondarySpeed[0x24];
};
typedef char TransitionSpeedViewOffsets[offsetof(TransitionSpeedView, frameSpeed) + 0x20 == 0x234 &&
    offsetof(TransitionSpeedView, secondarySpeed) + 0x20 == 0x7AC ? 1 : -1];

void FUN_004a7dc8(BattleTransitionState *work, s32 anchor, u32 color, s32 alternate)
{
    const SpriteInfo *frame = layoutFindTableEntry(&work->frameDraw.region, anchor + 0x42F);
    s32 x = frame->x;
    s32 y = frame->y;
    efctSetSpeed(vec2GetSpeed(&reinterpret_cast<const TransitionSpeedView *>(work)->frameSpeed));
    FUN_004934ac(&work->frameDraw.region, 0x426, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x427, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x428, x, y, color);
    efctSetSpeed(1.0f);
    FUN_0049368c(&work->frameDraw.region, 0x429, x, y, color, 1);
    if (alternate) {
        FUN_004934ac(&work->frameDraw.region, 0x5CF, x, y, color);
        FUN_004934ac(&work->frameDraw.region, 0x5D0, x, y, color);
        FUN_004934ac(&work->frameDraw.region, 0x5D2, x, y, color);
        efctSetSpeed(vec2GetSpeed(&reinterpret_cast<const TransitionSpeedView *>(work)->secondarySpeed));
        FUN_004934ac(&work->frameDraw.region, 0x5D1, x, y, color);
        efctSetSpeed(1.0f);
        return;
    }
    FUN_004934ac(&work->frameDraw.region, 0x42A, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x42B, x, y, color);
    FUN_004934ac(&work->frameDraw.region, 0x5C9, x, y, color);
    efctSetSpeed(vec2GetSpeed(&reinterpret_cast<const TransitionSpeedView *>(work)->secondarySpeed));
    FUN_004934ac(&work->frameDraw.region, 0x42C, x, y, color);
    efctSetSpeed(1.0f);
}
}

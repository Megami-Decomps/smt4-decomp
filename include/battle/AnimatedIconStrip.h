#ifndef BATTLE_ANIMATED_ICON_STRIP_H
#define BATTLE_ANIMATED_ICON_STRIP_H

#include "common.h"
#include <stddef.h>

// Accessed prefix; the complete owner allocation has not been recovered.
struct BattleAnimatedIconStrip {
    s32 ids[14]; // 0x00
    s32 count; // 0x38
    s32 frame; // 0x3c
    f32 pulse; // 0x40
    u8 fixedScale; // 0x44
    u8 unk45[3];
    u32 unk48;
    s32 times[14]; // 0x4c
    s32 timer; // 0x84
};
typedef char BattleAnimatedIconStripLayoutCheck[
    sizeof(BattleAnimatedIconStrip) == 0x88 &&
    offsetof(BattleAnimatedIconStrip, count) == 0x38 &&
    offsetof(BattleAnimatedIconStrip, pulse) == 0x40 &&
    offsetof(BattleAnimatedIconStrip, fixedScale) == 0x44 &&
    offsetof(BattleAnimatedIconStrip, times) == 0x4c &&
    offsetof(BattleAnimatedIconStrip, timer) == 0x84 ? 1 : -1];

#endif

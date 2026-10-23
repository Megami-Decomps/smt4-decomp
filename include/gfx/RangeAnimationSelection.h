#ifndef GFX_RANGE_ANIMATION_SELECTION_H
#define GFX_RANGE_ANIMATION_SELECTION_H
#include "common.h"
#include <stddef.h>
struct AnimationVisualState;
struct BattleRosterRecordA;
struct Range {
    f32 start, end, elapsed, value;
    s16 duration, delay;
};
struct RangeAnimationPreset {
    s16 id;
    s16 duration;
    s16 startPercent;
    s16 endPercent;
};
struct RangeAnimationPresetPair {
    RangeAnimationPreset first;
    RangeAnimationPreset second;
};
struct RangeAnimationPresets {
    u8 unk00[0x1C];
    RangeAnimationPresetPair groups[3][2];
};
struct RangeAnimationOwner {
    u8 unk0000[0x3000];
    struct {
        union {
            u8 unk3000[0x3C8];
            struct {
                u8 prefix3000[0x3B4];
                /* 0x33B4 */ u8 state;
                u8 padding33B5[7];
                /* 0x33BC */ BattleRosterRecordA *roster;
                /* 0x33C0 */ AnimationVisualState *visual;
                /* 0x33C4 */ const s16 *timings;
            } events;
        };
        RangeAnimationPresets *presets;
        Range *first;
        Range *second;
    } animation;
};
struct RangeAnimationOwnerIV {
    u8 unk0000[0x3000];
    struct {
        u8 unk3000[0x54];
        RangeAnimationPresets *presets;
        Range *first;
        Range *second;
    } animation;
};
typedef char RangeAnimationOwnerIVOffsetCheck[
    offsetof(RangeAnimationOwnerIV, animation.presets) == 0x3054 &&
    offsetof(RangeAnimationOwnerIV, animation.first) == 0x3058 &&
    offsetof(RangeAnimationOwnerIV, animation.second) == 0x305C &&
    sizeof(RangeAnimationOwnerIV) == 0x3060 ? 1 : -1];
typedef char RangeAnimationOffsetsCheck[
    sizeof(Range) == 0x14 && sizeof(RangeAnimationPresetPair) == 0x10 &&
    offsetof(RangeAnimationPresets, groups) == 0x1C &&
    offsetof(RangeAnimationOwner, animation.presets) == 0x33C8 &&
    offsetof(RangeAnimationOwner, animation.first) == 0x33CC &&
    offsetof(RangeAnimationOwner, animation.second) == 0x33D0 ? 1 : -1];
typedef char RangeAnimationEventsOffsetsCheck[
    offsetof(RangeAnimationOwner, animation.events.state) == 0x33B4 &&
    offsetof(RangeAnimationOwner, animation.events.roster) == 0x33BC &&
    offsetof(RangeAnimationOwner, animation.events.visual) == 0x33C0 &&
    offsetof(RangeAnimationOwner, animation.events.timings) == 0x33C4 &&
    sizeof(RangeAnimationOwner) == 0x33D4 ? 1 : -1];
#endif

#ifndef BATTLE_ACTORCARDANIMATIONS_H
#define BATTLE_ACTORCARDANIMATIONS_H

#include "ui/UiSpriteState.h"

struct ActorCardAnimationState {
    u16 states[5];
    u16 frames[5];
    f32 times[5];
    u8 blocked[6];
    u16 counters[6][5];
};
struct ActorCardAnimations {
    u8 unk0000[0x13D0];
    UiSpriteState sprites[3][4];
    u8 unk1A60[0x15E0];
    u32 unit;
    u8 unk3044[0x290C];
    ActorCardAnimationState animation;
};
struct ActorCardAnimationsA {
    u8 unk0000[0x145C];
    UiSpriteState sprites[3][4];
    u8 unk1AEC[0x1D88];
    u32 unit;
    u8 unk3878[0x12B4];
    ActorCardAnimationState animation;
};
typedef char ActorCardAnimationOffsetsCheck[
    offsetof(ActorCardAnimations, unit) == 0x3040 &&
    offsetof(ActorCardAnimations, animation) == 0x5950 &&
    offsetof(ActorCardAnimationsA, unit) == 0x3874 &&
    offsetof(ActorCardAnimationsA, animation) == 0x4B2C &&
    offsetof(ActorCardAnimationState, counters) == 0x2E ? 1 : -1];

#endif

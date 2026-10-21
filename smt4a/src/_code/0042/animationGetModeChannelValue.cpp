#include "common.h"

struct AnimationModeTarget;
struct AnimationModeChannel;

struct AnimationModeOwner {
    u32 unk00[2];       // 0x00
    AnimationModeTarget* target; // 0x08
};

struct AnimationModeState {
    u8 unk00[8];         // 0x00
    AnimationModeOwner* owner; // 0x08
    u8 unk0c[0x20];      // 0x0c
    s32 mode;             // 0x2c
};

extern "C" {
AnimationModeChannel* FUN_0040619c(AnimationModeTarget* target, u32 mode);
f32 candidateGetPreferredValue(AnimationModeChannel* channel);

// Read the selected animation-mode channel, returning zero when it is unavailable.
f32 animationGetModeChannelValue(AnimationModeState* state)
{
    u32 mode = 0;
    f32 value = 0.0f;
    if (state->mode == 4) {
        mode = 1;
    } else if (state->mode == 5) {
        mode = 2;
    }
    if (state->owner != NULL) {
        AnimationModeChannel* channel = FUN_0040619c(state->owner->target, mode);
        if (channel != NULL) {
            value = candidateGetPreferredValue(channel);
        }
    }
    return value;
}
}

/* NON_MATCHING: ARMCC groups key value/time loads with ldm, reverses floating-point division operands' register allocation, and uses a different leaf frame. */
#include "common.h"

struct ScalarAnimationKey {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 time;
    /* 0x08 */ u8 unk08[0x10];
};

struct ScalarAnimation {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ ScalarAnimationKey keys[4];
};

extern "C" void FUN_00291008(f32* value, f32 step, f32 target);

// Advance a four-key scalar animation, skipping keys with nonincreasing times.
extern "C" void FUN_002015e4(const ScalarAnimation* animation, s32* elapsed,
                            s8* keyIndex, s32* duration, f32* value,
                            f32* step, f32* target)
{
    if (*keyIndex >= 4) {
        return;
    }
    ++*elapsed;
    if (*elapsed > *duration) {
        *elapsed = 0;
        *step = 0.0f;
        s32 distance = 1;
        if (*keyIndex < 3) {
            for (; *keyIndex + distance < 4; ++distance) {
                *duration = animation->keys[*keyIndex + distance].time -
                            animation->keys[*keyIndex].time;
                if (*duration > 0) {
                    *step = static_cast<f32>(animation->keys[*keyIndex + distance].value -
                                             animation->keys[*keyIndex].value) /
                            static_cast<f32>(animation->keys[*keyIndex + distance].time -
                                             animation->keys[*keyIndex].time);
                    *target = static_cast<f32>(animation->keys[*keyIndex + distance].value);
                    *keyIndex += distance;
                    break;
                }
            }
        }
    } else {
        FUN_00291008(value, *step, *target);
    }
}

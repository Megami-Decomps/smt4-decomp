/* NON_MATCHING: retail retains a frame and non-tail Hermite call; compiler emits a tail call. */
#include "shard/W9_W9Match1_HermiteTrack.h"

extern "C" {
f32 nn_math_ARMv6_HermiteC_FAST(f32 firstValue, f32 firstTangent, f32 secondValue, f32 secondTangent, f32 elapsed, f32 duration);

// Sample a Hermite animation track, correcting its estimated key interval.
f32 FUN_003f9d34(const HermiteAnimationTrack *track, f32 frame)
{
    const HermiteAnimationKey *last = track->keys + track->count - 1;
    const HermiteAnimationKey *key = track->keys;
    if (key->frame <= frame) {
        key = last;
        if (frame < key->frame) {
            u32 estimate = (u32)((f32)(track->count - 1) * frame * track->inverseDuration);
            key = track->keys + estimate;
            if (key->frame > frame) {
                do {
                    --key;
                } while (key->frame > frame);
            } else {
                do {
                    ++key;
                } while (key->frame <= frame);
                --key;
            }
        }
    }
    f32 value;
    if (key->frame != frame && key != last) {
        value = nn_math_ARMv6_HermiteC_FAST(key->value, key->outgoingTangent, key[1].value,
                                           key[1].incomingTangent, frame - key->frame,
                                           key[1].frame - key->frame);
    } else {
        value = key->value;
    }
    return value;
}
}

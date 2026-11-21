/* NON_MATCHING: the key search (the same static helper as curveSampleLinear16's) now has retail's by-value time copies; retail keeps the key in r0 and calls HermiteC_FAST with bl inside a push {r4, lr} frame where armcc tail-calls it. */
#include "shard/W9_W9Match1_HermiteTrack.h"

extern "C" {
f32 nn_math_ARMv6_HermiteC_FAST(f32 firstValue, f32 firstTangent, f32 secondValue, f32 secondTangent, f32 elapsed, f32 duration);

/* Finds the last key not after `frame`, searching from an interpolated guess (curveSampleLinear16's search). */
static const HermiteAnimationKey *trackFindKey(const HermiteAnimationTrack *track, f32 frame)
{
    const HermiteAnimationKey *key = track->keys;
    if (key->frame > frame) {
        return key;
    }
    key = &track->keys[track->count - 1];
    if (key->frame <= frame) {
        return key;
    }
    key = &track->keys[(u32)(track->inverseDuration * ((f32)(s32)(track->count - 1) * frame))];
    if (key->frame > frame) {
        do {
            key--;
        } while (key->frame > frame);
    } else {
        do {
            key++;
        } while (key->frame <= frame);
        key--;
    }
    return key;
}

/* Samples a Hermite animation track at `frame`. */
f32 FUN_003f9d34(const HermiteAnimationTrack *track, f32 frame)
{
    const HermiteAnimationKey *key = trackFindKey(track, frame);
    f32 keyFrame = key->frame;
    const HermiteAnimationKey *last = &track->keys[track->count - 1];
    if (keyFrame == frame || last == key) {
        return key->value;
    }
    const HermiteAnimationKey *next = key + 1;
    return nn_math_ARMv6_HermiteC_FAST(key->value, key->outgoingTangent, next->value, next->incomingTangent,
                                       frame - keyFrame, next->frame - keyFrame);
}
}

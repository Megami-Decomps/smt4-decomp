/* NON_MATCHING: Hermite key-search comparison registers and the final helper tail call differ. */
/* Finds the surrounding float keys and samples their cubic Hermite segment. */
#include "shard/AnimCurve.h"
#include "shard/W9_W9Match1_HermiteTrack.h"

extern "C" f32 nn_math_ARMv6_HermiteC_FAST(f32 firstValue, f32 firstTangent,
    f32 secondValue, f32 secondTangent, f32 offset, f32 duration);

extern "C" f32 FUN_00519958(AnimCurve *curve, f32 time)
{
    HermiteAnimationKey *key = curve->hermiteKeys;
    HermiteAnimationKey *last = &curve->hermiteKeys[curve->keyCount - 1];
    if (key->frame <= time) {
        key = last;
        if (time < last->frame) {
            u32 estimate = (u32)(curve->keyRate * ((f32)(curve->keyCount - 1) * time));
            key = &curve->hermiteKeys[estimate];
            if (key->frame > time) {
                do {
                    --key;
                } while (time < key->frame);
            } else {
                do {
                    ++key;
                } while (key->frame <= time);
                --key;
            }
        }
    }
    if (key->frame == time || key == last) {
        return key->value;
    }
    HermiteAnimationKey *next = key + 1;
    return nn_math_ARMv6_HermiteC_FAST(key->value, key->outgoingTangent,
        next->value, next->incomingTangent, time - key->frame, next->frame - key->frame);
}

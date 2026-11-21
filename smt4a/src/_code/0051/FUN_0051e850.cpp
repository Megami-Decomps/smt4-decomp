/* NON_MATCHING: written as IV's FUN_003f9d34 (the same key search, with retail's by-value frame copies); retail keeps the
 * key in r0 and calls HermiteC_FAST with bl inside a push {r4, lr} frame where armcc tail-calls it. */
#include "gfx/CompactHermiteTrack.h"

extern "C" {
f32 nn_math_ARMv6_HermiteC_FAST(f32, f32, f32, f32, f32, f32);

/* Finds the last key not after `frame`, searching from an interpolated guess (curveSampleLinear16's search). */
static const CompactHermiteKey *compactHermiteFindKey(const CompactHermiteTrack *track, f32 frame)
{
    const CompactHermiteKey *key = track->keys;
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

/* Samples a compact Hermite track (one tangent per key) at `frame`. */
f32 FUN_0051e850(const CompactHermiteTrack *track, f32 frame)
{
    const CompactHermiteKey *key = compactHermiteFindKey(track, frame);
    f32 keyFrame = key->frame;
    const CompactHermiteKey *last = &track->keys[track->count - 1];
    if (keyFrame == frame || last == key) {
        return key->value;
    }
    const CompactHermiteKey *next = key + 1;
    return nn_math_ARMv6_HermiteC_FAST(key->value, key->tangent, next->value, next->tangent,
                                       frame - keyFrame, next->frame - keyFrame);
}
}

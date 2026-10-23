/* NON_MATCHING: key-search VFP comparisons and final Hermite tail-call lowering differ from retail. */
#include "gfx/CompactHermiteTrack.h"

extern "C" {
f32 nn_math_ARMv6_HermiteC_FAST(f32, f32, f32, f32, f32, f32);

/* Estimate the containing interval, correct it, and sample the Hermite track. */
f32 FUN_0051e850(const CompactHermiteTrack *track, f32 frame)
{
    s32 count = track->count;
    const CompactHermiteKey *last = &track->keys[count - 1];
    const CompactHermiteKey *key;
    if (track->keys[0].frame > frame) {
        key = track->keys;
    } else if (last->frame <= frame) {
        key = last;
    } else {
        u32 index = (u32)(track->inverseDuration * ((f32)(count - 1) * frame));
        key = &track->keys[index];
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
    f32 value;
    if (key->frame != frame && key != last) {
        value = nn_math_ARMv6_HermiteC_FAST(
            key->value, key->tangent, key[1].value, key[1].tangent,
            frame - key->frame, key[1].frame - key->frame);
    } else {
        value = key->value;
    }
    return value;
}
}

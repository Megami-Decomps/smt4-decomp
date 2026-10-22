/* NON_MATCHING: key-search pointer arithmetic and Hermite tail-call lowering differ from retail. */
#include "shard/AnimCurve.h"

struct FloatHermiteKey { f32 frame, value, tangent; };
extern "C" {
f32 nn_math_ARMv6_HermiteC_FAST(f32 value, f32 outgoing, f32 nextValue, f32 incoming, f32 elapsed, f32 duration);

// Locate the surrounding keys and sample a floating-point Hermite segment.
f32 FUN_00519640(const AnimCurve *curve, f32 frame)
{
    const FloatHermiteKey *first = (const FloatHermiteKey *)curve->keys;
    const FloatHermiteKey *last = first + curve->keyCount - 1;
    const FloatHermiteKey *key = first;
    if (first->frame <= frame) {
        key = last;
        if (frame < last->frame) {
            u32 guess = (u32)(curve->keyRate * (f32)(curve->keyCount - 1) * frame);
            key = first + guess;
            if (key->frame > frame) {
                do { --key; } while (frame < key->frame);
            } else {
                while ((key + 1)->frame <= frame)
                    ++key;
            }
        }
    }
    if (key->frame == frame || key == last)
        return key->value;
    return nn_math_ARMv6_HermiteC_FAST(key->value, key->tangent, key[1].value, key[1].tangent,
        frame - key->frame, key[1].frame - key->frame);
}
}

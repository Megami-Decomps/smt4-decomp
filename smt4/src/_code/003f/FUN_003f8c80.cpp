/* NON_MATCHING: only the rounding divide differs: retail divides the incoming s0 while the build divides the s16 copy. */
#include "shard/AnimCurve.h"

extern "C" f32 __hardfp_floorf(f32 value);

/* The key immediately preceding the rounded sample frame. */
static __inline const PackedScalarAnimKey *findKey(const PackedScalarAnimCurve *curve, f32 frame)
{
    // A float at offset four cannot be added inside the halfword-aligned unk02 padding.
    struct SampledCurveView {
        u16 keyCount;
        u16 unk02;
        f32 inverseDuration;
        f32 valueScale;
        f32 valueBase;
        f32 timeScale;
        PackedScalarAnimKey keys[1];
    };
    typedef char SampledCurveLayoutCheck[
        offsetof(SampledCurveView, inverseDuration) == 4 &&
        offsetof(SampledCurveView, keys) == 0x14 ? 1 : -1];
    const SampledCurveView *source = (const SampledCurveView *)curve;
    u32 roundedFrame = (u32)__hardfp_floorf(frame / source->timeScale + 0.5f);
    const PackedScalarAnimKey *key = source->keys;
    if (key->frame <= roundedFrame) {
        key = source->keys + source->keyCount - 1;
        if (roundedFrame < key->frame) {
            u32 estimate = (u32)(source->inverseDuration * ((f32)(source->keyCount - 1) * frame));
            key = source->keys + estimate;
            if (roundedFrame < key->frame) {
                do {
                    --key;
                } while (roundedFrame < key->frame);
            } else {
                do {
                    ++key;
                } while (key->frame <= roundedFrame);
                --key;
            }
        }
    }
    return key;
}

/* The key's value field as a float. */
static __inline f32 keyGetValue(const PackedScalarAnimKey *key)
{
    return key->value;
}

/* The curve's value at `frame`: its preceding key's value, scaled and offset. */
extern "C" f32 FUN_003f8c80(const PackedScalarAnimCurve *curve, f32 frame)
{
    return keyGetValue(findKey(curve, frame)) * curve->valueScale + curve->valueBase;
}

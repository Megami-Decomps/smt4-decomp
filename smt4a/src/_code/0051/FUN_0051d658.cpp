/* NON_MATCHING: rounding constant load placement and initial VFP division registers differ. */
#include "shard/AnimCurve.h"

extern "C" f32 hardfp_floorf(f32 value);

// Find the packed key immediately preceding a rounded sample frame.
extern "C" const PackedScalarAnimKey *FUN_0051d658(const PackedScalarAnimCurve *curve, f32 frame)
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
    u32 roundedFrame = (u32)hardfp_floorf(frame / source->timeScale + 0.5f);
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

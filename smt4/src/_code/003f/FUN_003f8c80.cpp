/* NON_MATCHING: packed-scalar constants and VFP loads are scheduled differently. */
#include "shard/AnimCurve.h"

extern "C" f32 __hardfp_floorf(f32 value);

extern "C" f32 FUN_003f8c80(const PackedScalarAnimCurve *curve, f32 frame)
{
    // An aligned estimate-rate word overlays the shared header's byte padding.
    struct SampledCurveView {
        u16 keyCount;
        u16 unk02;
        f32 inverseDuration;
        f32 valueScale;
        f32 valueBase;
        f32 timeScale;
        PackedScalarAnimKey keys[1];
    };
    typedef char SampledCurveLayoutCheck[offsetof(SampledCurveView, inverseDuration) == 4 &&
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
    return source->valueBase + (f32)key->value * source->valueScale;
}

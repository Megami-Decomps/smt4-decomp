/* NON_MATCHING: final-key address, six-float VFP argument scheduling and Hermite tail-call formation differ. */
#include "shard/AnimCurve.h"

extern "C" {
const PackedAnimKeyNarrow *FUN_0051d730(const QuantizedAnimCurve *curve, f32 time);
f32 nn_math_ARMv6_HermiteC_FAST(f32 value, f32 outgoing, f32 nextValue,
                               f32 incoming, f32 elapsed, f32 duration);

f32 FUN_0051e640(const QuantizedAnimCurve *curve, f32 time)
{
    FUN_0051d730(curve, time);
    const PackedAnimKeyNarrow *keys = reinterpret_cast<const PackedAnimKeyNarrow *>(curve->keys);
    const PackedAnimKeyNarrow *last = keys + curve->keyCount - 1;
    const PackedAnimKeyNarrow *key = FUN_0051d730(curve, time);
    f32 keyTime = curve->timeScale * (f32)(u32)key->frame;
    if (keyTime == time || key == last) {
        u32 value = key->valueLow + ((u32)(key->valueHigh & 15) << 8);
        return curve->valueBase + (f32)value * curve->valueScale;
    }
    const PackedAnimKeyNarrow *next = key + 1;
    f32 duration = curve->timeScale * (f32)(u32)next->frame - keyTime;
    return nn_math_ARMv6_HermiteC_FAST(
        curve->valueBase + (f32)(u32)(key->valueLow + ((key->valueHigh & 15u) << 8)) * curve->valueScale,
        (f32)((s8)key->tangent * 16 + (key->valueHigh >> 4)) * (1.0f / 32.0f),
        curve->valueBase + (f32)(u32)(next->valueLow + ((next->valueHigh & 15u) << 8)) * curve->valueScale,
        (f32)((s8)next->tangent * 16 + (next->valueHigh >> 4)) * (1.0f / 32.0f),
        time - keyTime, duration);
}
}

/* NON_MATCHING: retail 61 vs built 56 rows; narrow packed-key extraction and VFP interpolation scheduling differ. */
#include "shard/AnimCurve.h"

extern "C" {
const PackedAnimKeyNarrow *FUN_0051d730(const QuantizedAnimCurve *, f32);

// Interpolate the 12-bit values of a four-byte quantized key stream.
f32 FUN_0051e09c(const QuantizedAnimCurve *curve, f32 time)
{
    FUN_0051d730(curve, time);
    const PackedAnimKeyNarrow *last = reinterpret_cast<const PackedAnimKeyNarrow *>(curve->keys) + curve->keyCount - 1;
    const PackedAnimKeyNarrow *key = FUN_0051d730(curve, time);
    f32 keyTime = curve->timeScale * static_cast<f32>(key->frame);
    u32 firstValue = key->valueLow + ((key->valueHigh & 15) << 8);
    if (keyTime == time || key == last)
        return curve->valueBase + static_cast<f32>(firstValue) * curve->valueScale;
    const PackedAnimKeyNarrow *next = key + 1;
    f32 nextTime = curve->timeScale * static_cast<f32>(next->frame);
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    u32 secondValue = next->valueLow + ((next->valueHigh & 15) << 8);
    f32 first = curve->valueBase + static_cast<f32>(firstValue) * curve->valueScale;
    f32 second = curve->valueBase + static_cast<f32>(secondValue) * curve->valueScale;
    return first * (1.0f - fraction) + second * fraction;
}
}

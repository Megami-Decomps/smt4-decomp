/* NON_MATCHING: retail 55 vs built 58 rows; wide packed-key extraction and VFP interpolation scheduling differ. */
#include "shard/AnimCurve.h"

extern "C" {
const PackedAnimKeyWide *FUN_0051d95c(const PackedAnimCurveWide *, f32);

// Interpolate the 20-bit values of an eight-byte quantized key stream.
f32 FUN_0051e464(const PackedAnimCurveWide *curve, f32 time)
{
    FUN_0051d95c(curve, time);
    const PackedAnimKeyWide *last = curve->keys + curve->keyCount - 1;
    const PackedAnimKeyWide *key = FUN_0051d95c(curve, time);
    f32 keyTime = curve->timeScale * static_cast<f32>(key->frame);
    if (keyTime == time || key == last)
        return curve->valueBase + static_cast<f32>(key->value) * curve->valueScale;
    f32 nextTime = curve->timeScale * static_cast<f32>(key[1].frame);
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    f32 first = curve->valueBase + static_cast<f32>(key->value) * curve->valueScale;
    f32 second = curve->valueBase + static_cast<f32>(key[1].value) * curve->valueScale;
    return first * (1.0f - fraction) + second * fraction;
}
}

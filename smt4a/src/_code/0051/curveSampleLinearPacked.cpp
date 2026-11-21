/* NON_MATCHING: VFP registers in the interpolation differ (retail loads the value base before the scale and keeps the key frame conversion in s0). */
#include "shard/AnimCurve.h"

extern "C" {
const PackedAnimKeyNarrow *frameCurveFindKeyAtTime(const QuantizedAnimCurve *, f32);
}

/* A key's twelve-bit value scaled into the curve's range (resourceGetPackedSampleFloat's decode). */
static __inline f32 narrowKeyValue(const QuantizedAnimCurve *curve, const PackedAnimKeyNarrow *key)
{
    u32 sample = (u32)key->valueLow + (((u32)key->valueHigh & 0x0F) << 8);
    return curve->valueBase + (f32)sample * curve->valueScale;
}

extern "C" {
// Interpolate the 12-bit values of a four-byte quantized key stream.
f32 curveSampleLinearPacked(const QuantizedAnimCurve *curve, f32 time)
{
    frameCurveFindKeyAtTime(curve, time);
    const PackedAnimKeyNarrow *last = reinterpret_cast<const PackedAnimKeyNarrow *>(curve->keys) + curve->keyCount - 1;
    const PackedAnimKeyNarrow *key = frameCurveFindKeyAtTime(curve, time);
    f32 keyTime = curve->timeScale * (f32)(u32)key->frame;
    if (keyTime == time || key == last)
        return narrowKeyValue(curve, key);
    const PackedAnimKeyNarrow *next = key + 1;
    f32 nextTime = curve->timeScale * (f32)(u32)next->frame;
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    return narrowKeyValue(curve, key) * (1.0f - fraction) + narrowKeyValue(curve, next) * fraction;
}
}

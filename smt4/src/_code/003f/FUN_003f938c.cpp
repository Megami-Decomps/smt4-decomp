/* NON_MATCHING: final-key addressing, short-circuit branches, and VFP scheduling differ. */
#include "shard/AnimCurve.h"

extern "C" {
const AnimKey *FUN_003f887c(const QuantizedAnimCurve *, f32);

// Linearly interpolate the unsigned key values and apply the curve's scale and bias.
f32 FUN_003f938c(const QuantizedAnimCurve *curve, f32 time)
{
    const AnimKey *key = FUN_003f887c(curve, time);
    f32 keyTime = curve->timeScale * (static_cast<f32>(key->frame) * 0.03125f);
    if (keyTime == time || key == &curve->keys[curve->keyCount - 1])
        return curve->valueBase + static_cast<f32>(key->unk02[0]) * curve->valueScale;
    const AnimKey *next = key + 1;
    f32 nextTime = curve->timeScale * (static_cast<f32>(next->frame) * 0.03125f);
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    f32 first = curve->valueBase + static_cast<f32>(key->unk02[0]) * curve->valueScale;
    f32 second = curve->valueBase + static_cast<f32>(next->unk02[0]) * curve->valueScale;
    return first * (1.0f - fraction) + second * fraction;
}
}

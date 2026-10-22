/* NON_MATCHING: Hermite VFP scheduling and tail-call lowering differ. */
#include "shard/AnimCurve.h"

extern "C" {
const AnimKey *FUN_0051d7e0(const QuantizedAnimCurve *, f32);
f32 nn_math_ARMv6_HermiteC_FAST(f32, f32, f32, f32, f32, f32);

// Evaluate a quantized Hermite segment with signed fixed-point key tangents.
f32 FUN_0051e75c(const QuantizedAnimCurve *curve, f32 time)
{
    const AnimKey *key = FUN_0051d7e0(curve, time);
    f32 keyTime = curve->timeScale * (static_cast<f32>(key->frame) * 0.03125f);
    if (keyTime == time || key == &curve->keys[curve->keyCount - 1])
        return curve->valueBase + static_cast<f32>(key->unk02[0]) * curve->valueScale;
    f32 nextTime = curve->timeScale * (static_cast<f32>(key[1].frame) * 0.03125f);
    return nn_math_ARMv6_HermiteC_FAST(
        curve->valueBase + static_cast<f32>(key->unk02[0]) * curve->valueScale,
        static_cast<f32>(static_cast<s16>(key->unk02[1])) * 0.00390625f,
        curve->valueBase + static_cast<f32>(key[1].unk02[0]) * curve->valueScale,
        static_cast<f32>(static_cast<s16>(key[1].unk02[1])) * 0.00390625f,
        time - keyTime, nextTime - keyTime);
}
}

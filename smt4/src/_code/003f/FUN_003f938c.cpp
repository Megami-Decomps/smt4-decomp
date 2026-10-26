/* NON_MATCHING: short-circuit compiles to retail's vcmp/cmpne/bne; only VFP scheduling of the interpolation differs and the build shares the final vmla/pop tail that retail keeps separate. */
#include "shard/AnimCurve.h"

extern "C" {
const AnimKey *FUN_003f887c(const QuantizedAnimCurve *, f32);

static __inline f32 animKeyTime(const QuantizedAnimCurve *curve, const AnimKey *key)
{
    return curve->timeScale * (static_cast<f32>(key->frame) * 0.03125f);
}

static __inline f32 animKeyValue(const QuantizedAnimCurve *curve, const AnimKey *key)
{
    return curve->valueBase + static_cast<f32>(key->unk02[0]) * curve->valueScale;
}

// Linearly interpolate the unsigned key values and apply the curve's scale and bias.
f32 FUN_003f938c(const QuantizedAnimCurve *curve, f32 time)
{
    const AnimKey *key = FUN_003f887c(curve, time);
    f32 keyTime = animKeyTime(curve, key);
    const AnimKey *last = &curve->keys[curve->keyCount - 1];
    if (keyTime == time || key == last)
        return animKeyValue(curve, key);
    const AnimKey *next = key + 1;
    f32 nextTime = animKeyTime(curve, next);
    f32 fraction = (time - keyTime) / (nextTime - keyTime);
    f32 first = animKeyValue(curve, key);
    f32 second = animKeyValue(curve, next);
    return first * (1.0f - fraction) + second * fraction;
}
}

/* NON_MATCHING: endpoint guard lowering, interpolation VFP scheduling, and the Hermite tail call differ. */
#include "shard/AnimCurve.h"

extern "C" {
const PackedAnimKeyWide* FUN_0051ca30(const AnimCurve* curve, f32 frame);
f32 nn_math_ARMv6_HermiteC_FAST(f32 value, f32 outgoing, f32 nextValue,
                              f32 incoming, f32 elapsed, f32 duration);

// Sample a packed scalar Hermite curve with unsigned values and signed fixed-point slopes.
f32 FUN_00519860(const AnimCurve* curve, f32 frame)
{
    const PackedAnimKeyWide* key = FUN_0051ca30(curve, frame);
    f32 keyFrame = curve->duration * (f32)key->frame;
    if (keyFrame == frame || key == &curve->packedScalarKeys[curve->keyCount - 1]) {
        return curve->values.base + (f32)key->value * curve->values.scale;
    }
    const PackedAnimKeyWide* next = key + 1;
    f32 elapsed = frame - keyFrame;
    f32 nextFrame = curve->duration * (f32)next->frame;
    f32 interval = nextFrame - keyFrame;
    f32 value = curve->values.base + (f32)key->value * curve->values.scale;
    f32 nextValue = curve->values.base + (f32)next->value * curve->values.scale;
    f32 outgoing = (f32)key->slopes.outgoing * 0.00390625f;
    f32 incoming = (f32)next->slopes.incoming * 0.00390625f;
    return nn_math_ARMv6_HermiteC_FAST(value, outgoing, nextValue, incoming, elapsed, interval);
}
}

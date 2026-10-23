/* NON_MATCHING: endpoint tests do not merge; tangent argument lifetimes and tail-call formation differ. */
#include "gfx/PackedHermiteByteKey.h"

extern "C" {
const PackedHermiteByteKey *FUN_003f8940(const QuantizedAnimCurve *curve, f32 time);
f32 nn_math_ARMv6_HermiteC_FAST(f32 value, f32 outgoing, f32 nextValue,
                               f32 incoming, f32 elapsed, f32 duration);

/* Evaluate a quantized Hermite track whose tangents have five fractional bits. */
f32 FUN_003f9b34(const QuantizedAnimCurve *curve, f32 time)
{
    const PackedHermiteByteKey *key = FUN_003f8940(curve, time);
    const PackedHermiteByteKey *keys = reinterpret_cast<const PackedHermiteByteKey *>(curve->keys);
    f32 keyTime = curve->timeScale * (f32)(u32)key->frame;
    if (keyTime == time || key == keys + curve->keyCount - 1) {
        u32 value = key->valueLow + ((u32)key->valueHigh << 8);
        return curve->valueBase + (f32)value * curve->valueScale;
    }
    const PackedHermiteByteKey *next = key + 1;
    f32 duration = curve->timeScale * (f32)(u32)next->frame - keyTime;
    u32 value = key->valueLow + ((u32)key->valueHigh << 8);
    u32 nextValue = next->valueLow + ((u32)next->valueHigh << 8);
    s32 outgoing = key->outgoingHigh * 16 + (key->tangentNibbles >> 4);
    s32 incoming = next->incomingLow + (s8)(next->tangentNibbles << 4) * 16;
    return nn_math_ARMv6_HermiteC_FAST(
        curve->valueBase + (f32)value * curve->valueScale,
        (f32)outgoing * (1.0f / 32.0f),
        curve->valueBase + (f32)nextValue * curve->valueScale,
        (f32)incoming * (1.0f / 32.0f), time - keyTime, duration);
}
}

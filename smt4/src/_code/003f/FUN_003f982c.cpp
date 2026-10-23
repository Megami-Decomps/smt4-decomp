/* NON_MATCHING: packed-key decoding retains extra integer registers and tail-calls Hermite instead of calling before restoring d8. */
#include "gfx/NarrowHermiteCurve.h"

static __inline u32 narrowKeyValue(const PackedAnimKeyNarrow *key)
{
    return key->valueLow + ((key->valueHigh & 0xFu) << 8);
}

static __inline s32 narrowKeyTangent(const PackedAnimKeyNarrow *key)
{
    return static_cast<s8>(key->tangent) * 16 + (key->valueHigh >> 4);
}

extern "C" {
const PackedAnimKeyNarrow *FUN_003f87cc(const NarrowHermiteCurve *curve, f32 time);
f32 nn_math_ARMv6_HermiteC_FAST(f32 firstValue, f32 firstTangent, f32 nextValue,
                               f32 nextTangent, f32 elapsed, f32 duration);

// Decode unsigned 12-bit values and signed 12-bit slopes from four-byte keys.
f32 FUN_003f982c(const NarrowHermiteCurve *curve, f32 time)
{
    const PackedAnimKeyNarrow *key = FUN_003f87cc(curve, time);
    const PackedAnimKeyNarrow *last = &curve->keys[curve->keyCount - 1];
    f32 keyTime = curve->frameLength * static_cast<f32>(static_cast<u32>(key->frame));
    if (keyTime == time || key == last) {
        return curve->valueBase + static_cast<f32>(narrowKeyValue(key)) * curve->valueScale;
    }
    const PackedAnimKeyNarrow *next = key + 1;
    f32 elapsed = time - keyTime;
    f32 duration = static_cast<f32>(static_cast<u32>(next->frame)) * curve->frameLength - keyTime;
    return nn_math_ARMv6_HermiteC_FAST(
        curve->valueBase + static_cast<f32>(narrowKeyValue(key)) * curve->valueScale,
        static_cast<f32>(narrowKeyTangent(key)) * (1.0f / 32.0f),
        curve->valueBase + static_cast<f32>(narrowKeyValue(next)) * curve->valueScale,
        static_cast<f32>(narrowKeyTangent(next)) * (1.0f / 32.0f),
        elapsed, duration);
}
}

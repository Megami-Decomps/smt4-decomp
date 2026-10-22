/* NON_MATCHING: final-key branch placement and VFP instruction scheduling differ. */
#include "shard/AnimCurve.h"

/* This packed-key format overlays the shared curve's six-byte key storage. */
struct PackedUnsignedAnimKey {
    u8 frame;
    u8 valueLow;
    u8 valueHigh;
    u8 unk03[3];
};
extern "C" const PackedUnsignedAnimKey *FUN_003f8940(const QuantizedAnimCurve *, f32);

/* Interpolate a packed sixteen-bit value using an eight-bit frame index. */
extern "C" f32 FUN_003f956c(const QuantizedAnimCurve *curve, f32 time)
{
    const PackedUnsignedAnimKey *key = FUN_003f8940(curve, time);
    const PackedUnsignedAnimKey *keys = (const PackedUnsignedAnimKey *)curve->keys;
    f32 keyTime = curve->timeScale * (f32)(u32)key->frame;
    if (keyTime == time || key == keys + curve->keyCount - 1) {
        u32 value = key->valueLow + ((u32)key->valueHigh << 8);
        return curve->valueBase + (f32)value * curve->valueScale;
    }
    f32 nextTime = curve->timeScale * (f32)(u32)key[1].frame;
    f32 weight = (time - keyTime) / (nextTime - keyTime);
    u32 value = key->valueLow + ((u32)key->valueHigh << 8);
    u32 nextValue = key[1].valueLow + ((u32)key[1].valueHigh << 8);
    return (curve->valueBase + (f32)value * curve->valueScale) * (1.0f - weight) +
           (curve->valueBase + (f32)nextValue * curve->valueScale) * weight;
}

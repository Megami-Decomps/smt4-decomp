/* NON_MATCHING: last-key compare and next-key pointer now match retail; VFP register allocation/scheduling of the interpolation differs. */
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
    const PackedUnsignedAnimKey *lastKey = &((const PackedUnsignedAnimKey *)curve->keys)[curve->keyCount - 1];
    f32 keyTime = curve->timeScale * (f32)(u32)key->frame;
    if (keyTime == time || key == lastKey) {
        u32 value = key->valueLow + ((u32)key->valueHigh << 8);
        return curve->valueBase + (f32)value * curve->valueScale;
    }
    const PackedUnsignedAnimKey *next = key + 1;
    f32 nextTime = curve->timeScale * (f32)(u32)next->frame;
    f32 weight = (time - keyTime) / (nextTime - keyTime);
    u32 value = key->valueLow + ((u32)key->valueHigh << 8);
    u32 nextValue = next->valueLow + ((u32)next->valueHigh << 8);
    return (curve->valueBase + (f32)value * curve->valueScale) * (1.0f - weight) +
           (curve->valueBase + (f32)nextValue * curve->valueScale) * weight;
}

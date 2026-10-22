/* NON_MATCHING: packed key decoding and interpolation use different VFP and byte-extraction registers. */
/* Linearly interpolates a scalar stored in twelve-bit packed animation keys. */
#include "shard/AnimCurve.h"

struct FrameCurve;
struct CurveKey;
extern "C" CurveKey *FUN_003f87cc(FrameCurve *curve, f32 time);

extern "C" f32 FUN_003f92a4(FrameCurve *source, f32 time)
{
    /* The lookup's private FrameCurve type leaves its scale/base pair in byte padding. */
    struct NarrowCurveView {
        u16 count;
        u8 unk02[6];
        f32 scale;
        f32 base;
        f32 frameDuration;
        PackedAnimKeyNarrow keys[1];
    };
    NarrowCurveView *curve = (NarrowCurveView *)source;
    PackedAnimKeyNarrow *key = (PackedAnimKeyNarrow *)FUN_003f87cc(source, time);
    f32 keyTime = curve->frameDuration * (f32)(u32)key->frame;
    u32 value = key->valueLow + ((u32)(key->valueHigh & 15) << 8);
    if (keyTime == time || key == &curve->keys[curve->count - 1]) {
        return curve->base + (f32)value * curve->scale;
    }
    PackedAnimKeyNarrow *next = key + 1;
    f32 factor = (time - keyTime) /
                 (curve->frameDuration * (f32)(u32)next->frame - keyTime);
    f32 first = curve->base + (f32)value * curve->scale;
    u32 nextValue = next->valueLow + ((u32)(next->valueHigh & 15) << 8);
    f32 second = curve->base + (f32)nextValue * curve->scale;
    return first * (1.0f - factor) + second * factor;
}

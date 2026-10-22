/* NON_MATCHING: compact-key interpolation uses fewer saved registers and different VFP operation ordering. */
/* Linearly interpolates a scalar stored in compact sixteen-bit animation keys. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace SampleValueDecoding;
extern "C" EncodedValue *FUN_0051d8a4(ValueDecoder *curve, f32 time);

extern "C" f32 FUN_0051e370(ValueDecoder *source, f32 time)
{
    /* Compact keys extend past the shared decoder's fixed prefix. */
    struct CompactKey {
        u8 frame;
        u8 low;
        u8 high;
        u8 unk03[3];
    };
    struct CompactCurveView {
        u16 count;
        u8 unk02[6];
        f32 scale;
        f32 base;
        f32 frameDuration;
        CompactKey keys[1];
    };
    CompactCurveView *curve = (CompactCurveView *)source;
    CompactKey *key = (CompactKey *)FUN_0051d8a4(source, time);
    f32 keyTime = curve->frameDuration * (f32)(u32)key->frame;
    u32 value = key->low + ((u32)key->high << 8);
    if (keyTime == time || key == &curve->keys[curve->count - 1]) {
        return curve->base + (f32)value * curve->scale;
    }
    CompactKey *next = key + 1;
    f32 factor = (time - keyTime) /
                 (curve->frameDuration * (f32)(u32)next->frame - keyTime);
    f32 first = curve->base + (f32)value * curve->scale;
    u32 nextValue = next->low + ((u32)next->high << 8);
    f32 second = curve->base + (f32)nextValue * curve->scale;
    return first * (1.0f - factor) + second * factor;
}

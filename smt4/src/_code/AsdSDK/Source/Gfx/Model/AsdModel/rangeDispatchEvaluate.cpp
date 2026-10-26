#include "common.h"

struct RangeDispatchView {
    f32 unk00;       // 0x00
    f32 unk04;       // 0x04
    u32 unk08;       // 0x08
    u32 flags;       // 0x0C
    u8 payload[1];   // 0x10, variable-length data
};

typedef s32 (*RangeDispatchCallback)(u8 *payload, f32 value);

extern "C" {
f32 thresholdDispatchOutsideRange(RangeDispatchView *record, f32 value);
f32 mathlib_ceilf(f32 value);
extern RangeDispatchCallback DAT_00471c20[];
}

// Resolve a constant, packed-bit, or callback result after adjusting the input.
extern "C" u32 rangeDispatchEvaluate(RangeDispatchView *record, f32 value)
{
    value = thresholdDispatchOutsideRange(record, value);

    const u32 flags = record->flags;
    if (flags & 1) {
        return (flags & 2) >> 1;
    }

    if (flags & 4) {
        f32 offset = value - record->unk00;
        if (record->unk04 == value) {
            offset = mathlib_ceilf(offset);
        }
        const u32 bitIndex = (u32)offset;
        const u32 byteIndex = bitIndex >> 3;
        return (record->payload[byteIndex] >> (bitIndex & 7)) & 1;
    }

    const u32 callbackIndex = (flags & 0x38) >> 3;
    return DAT_00471c20[callbackIndex](record->payload, value) != 0;
}

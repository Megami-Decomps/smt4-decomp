/* NON_MATCHING: Retail ldr r1, [pc, #108] differs from recovered ldr r1, [pc, #104]. */
#include "common.h"
#include <math.h>

// Private view of the four-float interpolation table.
struct InterpolationEntryView {
    f32 unk00; // 0x00
    f32 unk04; // 0x04
    f32 unk08; // 0x08
    f32 unk0C; // 0x0C
};

extern "C" {
extern const InterpolationEntryView DAT_00536d14[];
f32 FUN_001b4030(f32 value, f32 divisor);
}

// Interpolate two table outputs from the reduced magnitude, restoring the first output's sign.
extern "C" void FUN_0018a924(f32 *firstOutput, f32 *secondOutput, f32 value)
{
    union MagnitudeView {
        f32 value;
        s32 bits;
    } magnitude;

    magnitude.value = fabsf(value);
    if (magnitude.bits >= 0x47800000) {
        magnitude.value = FUN_001b4030(magnitude.value, 65536.0f);
    }

    u16 integerPart = (u16)(u32)magnitude.value;
    f32 fraction = magnitude.value - (f32)integerPart;
    const InterpolationEntryView &entry = DAT_00536d14[(u8)integerPart];
    f32 first = entry.unk00 + fraction * entry.unk08;
    f32 second = entry.unk04 + fraction * entry.unk0C;

    if (value < 0.0f) {
        first = -first;
    }
    *firstOutput = first;
    *secondOutput = second;
}

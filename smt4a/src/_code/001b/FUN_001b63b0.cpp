/* NON_MATCHING: O2 reproduces the VFP sequence but preserves the integral index in different core registers; default adds a VFP move. */
#include "common.h"
#include <math.h>

struct InterpolationSample {
    f32 unk00; // 0x00
    f32 value; // 0x04
    f32 unk08; // 0x08
    f32 slope; // 0x0c
};

extern "C" {
extern const InterpolationSample DAT_00536d14[256];
f32 FUN_001b4030(f32 value, f32 divisor);

// Interpolate the absolute input through the periodic 256-sample lookup table.
f32 FUN_001b63b0(f32 value)
{
    union {
        f32 value;
        s32 bits;
    } magnitude;
    magnitude.value = fabsf(value);
    if (magnitude.bits >= 0x47800000) {
        magnitude.value = FUN_001b4030(magnitude.value, 65536.0f);
    }
    u32 integral = (u32)magnitude.value & 0xffff;
    const InterpolationSample* sample = &DAT_00536d14[integral & 0xff];
    f32 fraction = magnitude.value - (f32)integral;
    return fraction * sample->slope + sample->value;
}
}

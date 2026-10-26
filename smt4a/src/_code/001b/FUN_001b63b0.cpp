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
    f32 phase = fabsf(value);
    if (*(s32 *)&phase >= 0x47800000) {
        phase = FUN_001b4030(phase, 65536.0f);
    }
    u16 index = (u32)phase;
    const InterpolationSample *sample = &DAT_00536d14[index & 0xff];
    f32 fraction = phase - (f32)index;
    return sample->value + fraction * sample->slope;
}
}

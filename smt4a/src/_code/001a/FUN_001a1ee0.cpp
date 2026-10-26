/* NON_MATCHING: same flow as FUN_002b70cc (the guard call does reduce the phase in s0 here); armcc schedules the table lookup, the fraction subtract and the compare flags differently */
#include "common.h"
#include <math.h>

extern "C" {

struct WaveEntry {
    /* 0x00 */ f32 base;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 slope;
    /* 0x0c */ f32 unk0c;
};

extern WaveEntry DAT_00536d14[256];

f32 FUN_001b4030(f32 value, f32 period);

/* Table-driven periodic wave (period 65536, odd symmetry, 256 entries interpolated); out-of-range inputs are first reduced by FUN_001b4030. */
f32 FUN_001a1ee0(f32 x)
{
    f32 phase = fabsf(x);

    if (*(s32 *)&phase >= 0x47800000) {
        phase = FUN_001b4030(phase, 65536.0f);
    }
    u16 index = (u32)phase;
    f32 fraction = phase - (f32)index;
    const WaveEntry *entry = &DAT_00536d14[index & 0xff];
    f32 result = entry->base + fraction * entry->slope;

    if (x < 0.0f) {
        result = -result;
    }
    return result;
}

} /* extern "C" */

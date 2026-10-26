/* NON_MATCHING: same dataflow (sine-style table wave: reduce |x| below 65536, 256-entry table with linear interpolation, odd symmetry); armcc schedules the table-base load, the fraction subtract and the compare flags differently */
#include "common.h"
#include <math.h>

extern "C" {

struct WaveEntry {
    /* 0x00 */ f32 base;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 slope;
    /* 0x0c */ f32 unk0c;
};

extern WaveEntry DAT_00407ed0[256];

/* Table-driven periodic wave with period 65536 and odd symmetry, linearly interpolated between 256 entries. */
f32 FUN_002b70cc(f32 x)
{
    f32 phase = fabsf(x);

    while (*(s32 *)&phase >= 0x47800000) {
        phase -= 65536.0f;
    }
    u16 index = (u32)phase;
    f32 fraction = phase - (f32)index;
    const WaveEntry *entry = &DAT_00407ed0[index & 0xff];
    if (x < 0.0f)
        return -(entry->base + fraction * entry->slope);
    return entry->base + fraction * entry->slope;
}

} /* extern "C" */

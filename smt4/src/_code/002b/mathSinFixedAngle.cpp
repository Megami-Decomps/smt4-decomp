/* NON_MATCHING: same dataflow and literal pool; armcc moves the sign-compare vmrs earlier and loads the slope before the fraction subtract (other registers). */
#include "common.h"
#include <math.h>

extern "C" {

struct WaveEntry {
    /* 0x00 */ f32 base;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 slope;
    /* 0x0c */ f32 unk0c;
};

extern WaveEntry g_sinCosTable[256];

/* Table-driven periodic wave with period 65536 and odd symmetry, linearly interpolated between 256 entries. */
f32 mathSinFixedAngle(f32 x)
{
    f32 phase = fabsf(x);

    while (*(s32 *)&phase >= 0x47800000) {
        phase -= 65536.0f;
    }
    u16 index = (u32)phase;
    WaveEntry *table = g_sinCosTable;
    f32 fraction = phase - (f32)index;
    const WaveEntry *entry = &table[index & 0xff];
    if (x < 0.0f)
        return -(entry->base + fraction * entry->slope);
    return entry->base + fraction * entry->slope;
}

} /* extern "C" */

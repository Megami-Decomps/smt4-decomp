/* NON_MATCHING: 10 lines, same dataflow and literal pool; armcc moves the sign-compare vmrs earlier and loads the slope before the fraction subtract (other registers). */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[256];

/* The sine of a phase (65536 per turn, odd), interpolated from the 256-entry sine/cosine table. */
f32 mathSinFixedAngle(f32 x)
{
    f32 magnitude = wrapPhase(fabsf(x));
    u16 whole = (u32)magnitude;
    const PhaseTrigEntry *table = g_sinCosTable;
    const PhaseTrigEntry *entry = &table[(u8)whole];
    f32 fraction = magnitude - (f32)whole;
    if (x < 0.0f)
        return -(entry->sine + fraction * entry->sineDelta);
    return entry->sine + fraction * entry->sineDelta;
}

} /* extern "C" */

/* NON_MATCHING: table-base load now in place; the wrapped magnitude stays in s1 (retail keeps it in s0) and the index/conversion registers differ. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry DAT_00407ed0[256];

// Sample the cosine component of the linearly interpolated phase table.
f32 phaseCosInterpolate(f32 angle)
{
    f32 magnitude = wrapPhase(fabsf(angle));
    u16 whole = (u32)magnitude;
    const PhaseTrigEntry *table = DAT_00407ed0;
    const PhaseTrigEntry *entry = &table[(u8)whole];
    f32 fraction = magnitude - (f32)whole;
    return entry->cosine + fraction * entry->cosineDelta;
}
}

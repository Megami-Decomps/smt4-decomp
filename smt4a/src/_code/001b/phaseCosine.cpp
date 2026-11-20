/* NON_MATCHING: the cosine interpolation is right; retail loads the table address before the index math and the slope before the base value, and accumulates the vmla into s0 (build: s1, then a move). */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[256];
f32 FUN_001b4030(f32 value, f32 divisor);

/* The cosine of a phase (65536 per turn), interpolated from the 256-entry sine/cosine table. */
f32 phaseCosine(f32 angle)
{
    f32 magnitude = fabsf(angle);
    union { f32 value; s32 bits; } representation;
    representation.value = magnitude;
    if (representation.bits >= 0x47800000) {
        magnitude = FUN_001b4030(magnitude, 65536.0f);
    }
    u16 whole = (u32)magnitude;
    const PhaseTrigEntry *entry = &g_sinCosTable[(u8)whole];
    f32 fraction = magnitude - (f32)whole;
    return entry->cosine + fraction * entry->cosineDelta;
}
}

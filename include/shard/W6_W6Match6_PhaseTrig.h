#ifndef SHARD_W6_W6MATCH6_PHASE_TRIG_H
#define SHARD_W6_W6MATCH6_PHASE_TRIG_H
#include "common.h"
#include <math.h>

struct PhaseTrigEntry {
    f32 sine;
    f32 cosine;
    f32 sineDelta;
    f32 cosineDelta;
};
struct PhaseSinCos { f32 sine, cosine; };
struct PhaseVector { f32 x, y, z; };

static __inline PhaseSinCos samplePhase(const PhaseTrigEntry *table, f32 angle)
{
    bool negative = angle < 0.0f;
    f32 magnitude = fabsf(angle);
    union { f32 value; s32 bits; } representation;
    representation.value = magnitude;
    while (representation.bits >= 0x47800000) {
        magnitude -= 65536.0f;
        representation.value = magnitude;
    }
    u16 whole = (u32)magnitude;
    const PhaseTrigEntry *entry = &table[(u8)whole];
    f32 fraction = magnitude - (f32)whole;
    PhaseSinCos result;
    result.sine = entry->sine + fraction * entry->sineDelta;
    result.cosine = entry->cosine + fraction * entry->cosineDelta;
    if (negative)
        result.sine = -result.sine;
    return result;
}

/* Wraps a non-negative phase into [0, 65536). */
static __inline f32 wrapPhase(f32 magnitude)
{
    union { f32 value; s32 bits; } representation;
    representation.value = magnitude;
    while (representation.bits >= 0x47800000) {
        magnitude -= 65536.0f;
        representation.value = magnitude;
    }
    return magnitude;
}

#endif

/* NON_MATCHING: normalized angle/conversion VFP registers differ, and table-base/cosine loads are scheduled later/earlier than retail. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry DAT_00407ed0[256];

// Sample the cosine component of the linearly interpolated phase table.
f32 phaseCosInterpolate(f32 angle)
{
    angle = fabsf(angle);
    union { f32 value; s32 bits; } representation;
    representation.value = angle;
    while (representation.bits >= 0x47800000) {
        angle -= 65536.0f;
        representation.value = angle;
    }
    u16 whole = (u32)angle;
    const PhaseTrigEntry *entry = &DAT_00407ed0[(u8)whole];
    f32 fraction = angle - (f32)whole;
    return fraction + entry->cosine * entry->cosineDelta;
}
}

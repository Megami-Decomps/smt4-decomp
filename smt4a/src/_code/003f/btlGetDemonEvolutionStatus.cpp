/* NON_MATCHING: status/unit/template saved registers are r6/r4/r5 instead of retail r4/r5/r6. */
#include "shard/Shard0032.h"

struct DemonEvolutionData {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u16 requiredLevel;
    /* 0x32 */ u16 targetId;
};

extern "C" {
const DemonEvolutionData* FUN_00184310(u16 id);
u32 FUN_004d0bf0(u32 id);

// Report evolution availability, excluding a target already present in the party.
u8 btlGetDemonEvolutionStatus(const UnitRecord* unit)
{
    const DemonEvolutionData* evolution = FUN_00184310(unit->id);
    u8 status = 1;
    if (evolution->targetId != 0 && FUN_004d0bf0(evolution->targetId) == 0) {
        status = evolution->requiredLevel <= unit->unk64 ? 0 : 2;
    }
    return status;
}
}

#include "shard/Shard0032.h"

struct DemonEvolutionData {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u16 requiredLevel;
    /* 0x32 */ u16 targetId;
};

extern "C" {
const DemonEvolutionData* FUN_00184310(u16 id);
u32 gameStockContainsEntry(u32 id);

static __inline u8 demonEvolutionStatus(const UnitRecord *unit, const DemonEvolutionData *evolution)
{
    u8 status = 1;
    if (evolution->targetId != 0 && gameStockContainsEntry(evolution->targetId) == 0) {
        status = evolution->requiredLevel <= unit->unk64 ? 0 : 2;
    }
    return status;
}

// Report evolution availability, excluding a target already present in the party.
u8 btlGetDemonEvolutionStatus(const UnitRecord *unit)
{
    return demonEvolutionStatus(unit, FUN_00184310(unit->id));
}
}

#include "gamedata/DevilRecordA.h"
#include "shard/Shard0032.h"

extern "C" {
u32 gameStockContainsEntry(u32 id);

static __inline u8 demonEvolutionStatus(const UnitRecord *unit, const DevilRecordA *evolution)
{
    u8 status = 1;
    if (evolution->evolutionTarget != 0 && gameStockContainsEntry(evolution->evolutionTarget) == 0) {
        status = evolution->evolutionLevel <= unit->unk64 ? 0 : 2;
    }
    return status;
}

// Report evolution availability, excluding a target already present in the party.
u8 btlGetDemonEvolutionStatus(const UnitRecord *unit)
{
    return demonEvolutionStatus(unit, devilGetRecord(unit->id));
}
}

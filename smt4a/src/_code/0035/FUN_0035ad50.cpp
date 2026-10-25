/* NON_MATCHING: current-stat zero stores are scheduled earlier and the skill-copy base uses r5 instead of ip. */
#include "shard/Shard0032.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include <string.h>
#include "map/lmapMain.h"

extern "C" {
void sysMemClear(void *destination, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_004bcd90(UnitRecord *unit);
u16 recordGetScaledMaximum(UnitRecord *unit);

// Restore the saved demon's stats, skills, name, and status into a runtime unit.
void FUN_0035ad50(u32 id, UnitRecord *unit)
{
    FUN_00184310(id);
    SavedUnitRecordA saved;
    gameDataCopySaveEntry(id, &saved);
    sysMemClear(unit, 300);
    unit->id = id;
    unit->unk64 = saved.sortKey;
    unit->stats[0] = saved.hp;
    unit->stats[1] = saved.mp;
    unit->stats[2] = saved.baseStats[0];
    unit->stats[4] = saved.baseStats[2];
    unit->stats[5] = saved.baseStats[3];
    unit->stats[6] = saved.baseStats[4];
    unit->unk1C = 0;
    unit->unk1E = 0;
    unit->stats[3] = saved.baseStats[1];
    unit->stats2[0] = saved.currentStats[0];
    unit->stats2[2] = saved.currentStats[2];
    unit->stats2[3] = saved.currentStats[3];
    unit->stats2[4] = saved.currentStats[4];
    unit->stats2[1] = saved.currentStats[1];
    __aeabi_memcpy4(unit->name, saved.name, sizeof(unit->name));
    memcpy(unit->skillList.skills, saved.skills.words, sizeof(unit->skillList.skills));
    memcpy(unit->skillList.unk44, saved.skills.words + 4, sizeof(unit->skillList.unk44));
    unit->unk30 = saved.bits;
    unit->savedState.status = (u32(saved.status) << 26) >> 28;
    FUN_004bcd90(unit);
    unit->unk2A = recordGetScaledMaximum(unit);
    unit->unk2C = unit->unk10;
}
}

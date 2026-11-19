#include "shard/Shard0032.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include <string.h>
#include "map/lmapMain.h"
#include "shard/W6_W6Match5_EntryCollection.h"

extern "C" {
void sysMemClear(void *destination, u32 size);
void unitRecomputeDerivedStats(UnitRecord *unit);
u16 recordGetScaledMaximum(UnitRecord *unit);

// Restore the saved demon's stats, skills, name, and status into a runtime unit.
void unitRecordBuildFromSave(u32 id, UnitRecord *unit)
{
    nkmBaseGetRecord(id);
    SavedUnitRecordA saved;
    gameDataCopySaveEntry(id, &saved);
    sysMemClear(unit, 300);
    unit->id = id;
    unit->level = saved.sortKey;
    unit->tableStats[0] = saved.hp;
    unit->tableStats[1] = saved.mp;
    unit->tableStats[2] = saved.baseStats[0];
    unit->tableStats[4] = saved.baseStats[2];
    unit->tableStats[5] = saved.baseStats[3];
    unit->tableStats[6] = saved.baseStats[4];
    unit->tableStats[3] = saved.baseStats[1];
    unit->boostedMaxHp = 0;
    unit->boostedMaxMp = 0;
    unit->stats[0] = saved.currentStats[0];
    unit->stats[2] = saved.currentStats[2];
    unit->stats[3] = saved.currentStats[3];
    unit->stats[4] = saved.currentStats[4];
    unit->stats[1] = saved.currentStats[1];
    __aeabi_memcpy4(unit->name, saved.name, sizeof(unit->name));
    memcpy(unit->skills, saved.skills.words, sizeof(unit->skills));
    memcpy(unit->skillRanks, saved.skills.words + 4, sizeof(unit->skillRanks));
    unit->experience = saved.bits;
    unit->status = (u32(saved.status) << 26) >> 28;
    unitRecomputeDerivedStats(unit);
    unit->hp = recordGetScaledMaximum(unit);
    unit->mp = unit->maxMp;
}
}

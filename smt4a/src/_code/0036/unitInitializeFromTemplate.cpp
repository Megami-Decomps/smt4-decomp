#include "shard/Shard0032.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/NkmEnemyRecord.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include <string.h>

extern "C" {
void sysMemClear(void *data, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

// Initialize base, current, and maximum stats from the demon's table record.
void unitInitializeFromTemplate(u32 id, UnitRecord *unit)
{
    // Local views avoid raising NkmEnemyRecordA's alignment or growing NkmBaseRecordA.
    struct BaseStatsView {
        u16 id, flags;
        u32 hp, mp;
        u16 strength, magic, vitality, agility, luck;
    };
    const NkmEnemyRecordA *table = nkmEnemyFindById(id);
    const BaseStatsView *stats = reinterpret_cast<const BaseStatsView *>(table);
    sysMemClear(unit, 300);
    unit->id = id;
    unit->level = stats->flags & 0x7FFF;
    unit->tableStats[0] = stats->hp;
    unit->tableStats[1] = stats->mp;
    unit->tableStats[2] = stats->strength;
    unit->tableStats[4] = stats->vitality;
    unit->tableStats[5] = stats->agility;
    unit->tableStats[6] = stats->luck;
    unit->tableStats[3] = stats->magic;
    __aeabi_memcpy4(&unit->boostedMaxHp, unit->tableStats, sizeof(unit->tableStats));
    memcpy(&unit->maxHp, unit->tableStats, sizeof(unit->tableStats));
    unit->skills[0] = table->skills[0];
    unit->skills[1] = table->skills[1];
    unit->skills[2] = table->skills[2];
    unit->skills[3] = table->skills[3];
    unit->skills[4] = table->skills[4];
    unit->skills[5] = table->skills[5];
    unit->skills[6] = table->skills[6];
    unit->skills[7] = table->skills[7];
    const NkmBaseRecordA *devil = nkmBaseGetRecord(id);
    __aeabi_memcpy4(unit->name, devil->categoryModifiers, sizeof(unit->name));
    unit->hp = unit->maxHp;
    unit->mp = unit->maxMp;
}
}

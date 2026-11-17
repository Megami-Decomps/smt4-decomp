#include "shard/Shard0032.h"
#include "gamedata/Table00Lookup.h"
#include "gamedata/Table00.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include <string.h>

extern "C" {
void sysMemClear(void *data, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

// Initialize base, current, and maximum stats from the demon's table record.
void unitInitializeFromTemplate(u32 id, UnitRecord *unit)
{
    // Local views avoid raising Table00RecordA's alignment or growing DevilRecordA.
    struct BaseStatsView {
        u16 id, flags;
        u32 hp, mp;
        u16 strength, magic, vitality, agility, luck;
    };
    const Table00RecordA *table = dataTable00FindById(id);
    const BaseStatsView *stats = reinterpret_cast<const BaseStatsView *>(table);
    sysMemClear(unit, 300);
    unit->id = id;
    unit->unk64 = stats->flags & 0x7FFF;
    unit->stats[0] = stats->hp;
    unit->stats[1] = stats->mp;
    unit->stats[2] = stats->strength;
    unit->stats[4] = stats->vitality;
    unit->stats[5] = stats->agility;
    unit->stats[6] = stats->luck;
    unit->stats[3] = stats->magic;
    __aeabi_memcpy4(&unit->unk1C, unit->stats, sizeof(unit->stats));
    memcpy(unit->unk0E, unit->stats, sizeof(unit->stats));
    unit->skillList.skills[0] = table->skills[0];
    unit->skillList.skills[1] = table->skills[1];
    unit->skillList.skills[2] = table->skills[2];
    unit->skillList.skills[3] = table->skills[3];
    unit->skillList.skills[4] = table->skills[4];
    unit->skillList.skills[5] = table->skills[5];
    unit->skillList.skills[6] = table->skills[6];
    unit->skillList.skills[7] = table->skills[7];
    const DevilRecordA *devil = devilGetRecord(id);
    __aeabi_memcpy4(unit->name, devil->categoryModifiers, sizeof(unit->name));
    unit->unk2A = *reinterpret_cast<const u16 *>(unit->unk0E);
    unit->unk2C = unit->unk10;
}
}

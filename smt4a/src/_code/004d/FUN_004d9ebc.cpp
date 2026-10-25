#include "gamedata/UnitStatInitialization.h"
#include "shard/Shard0032.h"

extern "C" {
InitializedUnitStatsA *gameGetOptions(void);
UnitRecord *gameGetPlayerData(void);
s32 equipmentTableFindIndexById(u32 categoryId, u16 playerId);
void sysMemClear(void *, u32);

// Reset the selected category's unit and copy its base, current and maximum statistics.
void FUN_004d9ebc(u32 categoryId)
{
    InitializedUnitStatsA *unit = gameGetOptions();
    s32 variant = -1;
    for (s32 i = 0; i < 3; ++i) {
        if (unit->partyCategories[i] == categoryId) {
            variant = equipmentTableFindIndexById(categoryId, gameGetPlayerData()->id);
            break;
        }
    }
    sysMemClear(unit, 300);
    const CategoryUnitStatsA *entry = reinterpret_cast<const CategoryUnitStatsA *>(dataTableGetCategoryEntry(categoryId, variant));
    unit->categoryId = categoryId;
    unit->variant = variant;
    unit->id = 1201;
    unit->sortKey = entry->sortKey;
    u16 health = entry->stats[0];
    unit->base[0] = health;
    s16 mana = entry->stats[1];
    unit->base[1] = mana;
    u16 stat2 = entry->stats[2];
    unit->base[2] = stat2;
    s16 stat4 = entry->stats[4];
    unit->base[4] = stat4;
    u16 stat5 = entry->stats[5];
    unit->base[5] = stat5;
    u16 stat6 = entry->stats[6];
    unit->base[6] = stat6;
    s16 stat3 = entry->stats[3];
    unit->base[3] = stat3;
    unit->maximum[0] = health;
    unit->current[0] = health;
    unit->maximum[1] = mana;
    unit->current[1] = mana;
    unit->maximum[2] = stat2;
    unit->current[2] = stat2;
    unit->maximum[4] = stat4;
    unit->current[4] = stat4;
    unit->maximum[5] = stat5;
    unit->current[5] = stat5;
    unit->maximum[6] = stat6;
    unit->current[6] = stat6;
    unit->maximum[3] = stat3;
    unit->current[3] = stat3;
    unit->health = health;
    unit->mana = mana;
}
}

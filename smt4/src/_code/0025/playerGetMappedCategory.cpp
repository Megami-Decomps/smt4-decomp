#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
u32 mapCategoryToTableId(u32 category);
}

/* Map the player's packed table category to the corresponding identifier. */
extern "C" u32 playerGetMappedCategory()
{
    const EquipmentRecord *record = itemTableGetEquipmentRecord(gameGetPlayerData()->equipped.weapon);
    return mapCategoryToTableId(record->traits >> 20);
}

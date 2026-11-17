#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"

struct PlayerRecordId {
    /* 0x00 */ u16 id;
};
extern "C" {
PlayerRecordId *gameGetPlayerData();
u32 mapCategoryToTableId(u32 category);
}

/* Map the player's packed table category to the corresponding identifier. */
extern "C" u32 playerGetMappedCategory()
{
    const EquipmentRecord *record = dataTable08Sub2GetRecord(gameGetPlayerData()->id);
    return mapCategoryToTableId(record->traits >> 20);
}

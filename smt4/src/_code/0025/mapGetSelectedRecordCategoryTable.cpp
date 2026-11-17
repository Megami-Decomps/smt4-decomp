#include "common.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/GamePlayerData.h"

extern "C" s32 mapCategoryToTableId(u32 flags);

// Apply the selected player record's high table flags.
extern "C" s32 mapGetSelectedRecordCategoryTable()
{
    EquipmentRecord *record = dataTable08Sub2GetRecord(gameGetPlayerData()->equipped.bullets);
    return mapCategoryToTableId(record->traits >> 20);
}

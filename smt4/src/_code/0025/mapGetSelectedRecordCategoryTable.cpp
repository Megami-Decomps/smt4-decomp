#include "common.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"

struct PlayerTableSelection {
    u32 unk00;
    u16 id; // 0x04
};
extern "C" PlayerTableSelection *gameGetPlayerData();
extern "C" s32 mapCategoryToTableId(u32 flags);

// Apply the selected player record's high table flags.
extern "C" s32 mapGetSelectedRecordCategoryTable()
{
    RankedTableRecord *record = dataTable08Sub2GetRecord(gameGetPlayerData()->id);
    return mapCategoryToTableId(rankedTableRecordGetSortFlags(record) >> 20);
}

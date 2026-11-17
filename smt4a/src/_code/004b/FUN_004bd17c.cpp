#include "common.h"
#include "shard/Shard004B.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmBaseRecordA.h"

// Apply each item's category modifier, clamping its signed rank to -9..9.
extern "C" void FUN_004bd17c(ItemRankRecord *record)
{
    if (record == NULL)
        return;
    if (record->id && nkmBaseGetRecord(record->id)) {
        for (s32 i = 0; i < 8; ++i) {
            if (record->items[i]) {
                ItemRankDefinition *item = (ItemRankDefinition *)skillDataFindById(record->items[i]);
                if (item && item->category < 18) {
                    u32 category = item->category;
                    s8 rank = record->categoryRanks[category] + record->ranks[i];
                    record->ranks[i] = rank;
                    if (rank > 9)
                        record->ranks[i] = 9;
                    else if (rank < -9)
                        record->ranks[i] = -9;
                }
            }
        }
    }
}

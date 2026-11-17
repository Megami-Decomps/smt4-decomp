#include "common.h"
#include "shard/Shard004B.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/GameSaveDataA.h"

// Apply each item's category modifier, clamping its signed rank to -9..9.
extern "C" void FUN_004bd17c(SlotRecordA *record)
{
    if (record == NULL)
        return;
    if (record->id && nkmBaseGetRecord(record->id)) {
        for (s32 i = 0; i < 8; ++i) {
            if (record->skills[i]) {
                ItemRankDefinition *item = (ItemRankDefinition *)skillDataFindById(record->skills[i]);
                if (item && item->category < 18) {
                    u32 category = item->category;
                    s8 rank = record->categoryRanks[category] + record->skillRanks[i];
                    record->skillRanks[i] = rank;
                    if (rank > 9)
                        record->skillRanks[i] = 9;
                    else if (rank < -9)
                        record->skillRanks[i] = -9;
                }
            }
        }
    }
}

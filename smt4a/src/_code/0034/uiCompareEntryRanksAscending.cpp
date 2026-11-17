#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
/* NON_MATCHING: saved-register assignment differs (retail keeps leftData/rightData in r8/r9 and the scores in r6/r5) and the rank load targets r0 instead of r1. */
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {



s32 uiCompareEntryRanksAscending(const SortItem *left, const SortItem *right)
{
    EquipmentRecordA *leftData = itemTableGetEquipmentRecord(left->id);
    EquipmentRecordA *rightData = itemTableGetEquipmentRecord(right->id);
    s32 leftScore = 0;
    s32 rightScore = 0;
    s32 leftRank = DAT_0052b8ac[0].left;
    s32 rightRank = DAT_0052b8ac[0].right;
    for (s32 i = 0; i <= 7; i++) {
        if (FUN_00345098(leftScore, leftData->affinities[i].raw >> 10) > 0) {
            leftRank = i;
            leftScore = leftData->affinities[i].raw >> 10;
        }
        if (FUN_00345098(rightScore, rightData->affinities[i].raw >> 10) > 0) {
            rightRank = i;
            rightScore = rightData->affinities[i].raw >> 10;
        }
    }
    s32 order = leftRank - rightRank;
    if (order == 0) {
        order = FUN_00345098(leftScore, rightScore);
        if (order == 0) {
            leftData = itemTableGetEquipmentRecord(left->id);
            rightData = itemTableGetEquipmentRecord(right->id);
            s32 leftKey = leftData->order;
            s32 rightKey = rightData->order;
            order = leftKey - rightKey;
        }
    }
    return order;
}

} /* extern "C" */

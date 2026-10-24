/* NON_MATCHING: retail uses `mov r8, r0` where armcc emits `mov r6, r0`. */
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {



s32 uiCompareEntryRanksAscending(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    s32 leftScore = 0;
    s32 rightScore = 0;
    s32 leftRank = DAT_0052b8ac[0].left;
    s32 rightRank = DAT_0052b8ac[0].right;
    for (s32 i = 0; i < 8; i++) {
        if (FUN_00345098(leftScore, leftData->ranks[i] >> 10) > 0) {
            leftRank = i;
            leftScore = leftData->ranks[i] >> 10;
        }
        if (FUN_00345098(rightScore, rightData->ranks[i] >> 10) > 0) {
            rightRank = i;
            rightScore = rightData->ranks[i] >> 10;
        }
    }
    s32 order = leftRank - rightRank;
    if (order == 0) {
        order = FUN_00345098(leftScore, rightScore);
        if (order == 0) {
            leftData = dataTable08Sub2GetRecord(left->id);
            rightData = dataTable08Sub2GetRecord(right->id);
            order = leftData->tieKey - rightData->tieKey;
        }
    }
    return order;
}

} /* extern "C" */

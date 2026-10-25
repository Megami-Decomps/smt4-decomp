/* NON_MATCHING: sort-key operand order and the result local now match retail; retail copies leftSlot into r2 (mov r2, r0) before the push instead of loading through r0. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

s32 FUN_002909f8(const s32 *leftSlot, const s32 *rightSlot)
{
    s32 result = 0;
    s32 leftIndex = *leftSlot;
    s32 rightIndex = *rightSlot;
    if (leftIndex < 0) {
        if (rightIndex >= 0) {
            result = 1;
        }
        return result;
    }
    if (rightIndex < 0) {
        return -1;
    }
    SlotRecord *leftRecord = gameGetSlotRecord(leftIndex);
    SlotRecord *rightRecord = gameGetSlotRecord(*rightSlot);
    s32 difference = leftRecord->sortKey - rightRecord->sortKey;
    if (difference != 0) {
        return difference;
    }
    SlotSortInfo *leftInfo = FUN_00184310(leftRecord->entryId);
    SlotSortInfo *rightInfo = FUN_00184310(rightRecord->entryId);
    difference = rightInfo->priority - leftInfo->priority;
    if (difference != 0) {
        return difference;
    }
    return rightRecord->entryId - leftRecord->entryId;
}

} /* extern "C" */

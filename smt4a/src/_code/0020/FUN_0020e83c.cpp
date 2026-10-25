/* NON_MATCHING: retail uses mov r2, r0 where the compiled block uses ldr r0, [r0]. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

s32 FUN_0020e83c(const s32 *leftSlot, const s32 *rightSlot)
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
    s32 difference = rightRecord->sortKey - leftRecord->sortKey;
    if (difference != 0) {
        return difference;
    }
    SlotSortInfo *leftInfo = FUN_00184310(leftRecord->entryId);
    SlotSortInfo *rightInfo = FUN_00184310(rightRecord->entryId);
    difference = leftInfo->priority - rightInfo->priority;
    if (difference != 0) {
        return difference;
    }
    return leftRecord->entryId - rightRecord->entryId;
}

} /* extern "C" */

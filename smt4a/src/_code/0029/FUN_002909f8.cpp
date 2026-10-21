/* NON_MATCHING: retail uses mov r2, r0 where the compiled block uses ldr r0, [r0]. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

s32 FUN_002909f8(const s32 *leftSlot, const s32 *rightSlot)
{
    s32 leftIndex = *leftSlot;
    s32 rightIndex = *rightSlot;
    if (leftIndex < 0) {
        return rightIndex >= 0 ? 1 : 0;
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
    difference = rightInfo->priority - leftInfo->priority;
    if (difference != 0) {
        return difference;
    }
    return rightRecord->entryId - leftRecord->entryId;
}

} /* extern "C" */

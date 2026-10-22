/* NON_MATCHING: the initial saved-pointer moves and first slot load are scheduled differently; the remaining comparator body matches retail. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" s32 FUN_0020e83c(const s32 *first, const s32 *second);

// Sort occupied slots by entry priority, then use the common slot comparison.
extern "C" s32 FUN_00241874(const s32 *first, const s32 *second)
{
    s32 result = 0;
    if (*first < 0) {
        if (*second >= 0)
            result = 1;
    } else if (*second < 0) {
        result = -1;
    } else {
        SlotRecord *firstRecord = gameGetSlotRecord(*first);
        SlotRecord *secondRecord = gameGetSlotRecord(*second);
        SlotSortInfo *firstInfo = FUN_00184310(firstRecord->entryId);
        SlotSortInfo *secondInfo = FUN_00184310(secondRecord->entryId);
        result = firstInfo->priority - secondInfo->priority;
        if (result == 0)
            return FUN_0020e83c(first, second);
    }
    return result;
}

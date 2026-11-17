/* NON_MATCHING: the initial saved-pointer moves and first slot load are scheduled differently; the remaining comparator body matches retail. */
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/NkmBaseRecordA.h"

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
        SlotRecordA *firstRecord = gameGetSlotRecord(*first);
        SlotRecordA *secondRecord = gameGetSlotRecord(*second);
        NkmBaseRecordA *firstInfo = nkmBaseGetRecord(firstRecord->entryId);
        NkmBaseRecordA *secondInfo = nkmBaseGetRecord(secondRecord->entryId);
        result = firstInfo->race - secondInfo->race;
        if (result == 0)
            return FUN_0020e83c(first, second);
    }
    return result;
}

/* Built with the unit's cflags (-O2 -Otime). */
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "gamedata/NkmBaseRecordA.h"

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
    SlotRecordA *leftRecord = gameGetSlotRecord(leftIndex);
    SlotRecordA *rightRecord = gameGetSlotRecord(*rightSlot);
    s32 difference = leftRecord->level - rightRecord->level;
    if (difference != 0) {
        return difference;
    }
    NkmBaseRecordA *leftInfo = nkmBaseGetRecord(leftRecord->id);
    NkmBaseRecordA *rightInfo = nkmBaseGetRecord(rightRecord->id);
    difference = rightInfo->race - leftInfo->race;
    if (difference != 0) {
        return difference;
    }
    return rightRecord->id - leftRecord->id;
}

} /* extern "C" */

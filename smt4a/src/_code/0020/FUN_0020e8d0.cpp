#include "gamedata/SaveSlotRecord.h"

extern "C" {

s32 FUN_0020e83c(const s32 *left, const s32 *right);

/* Put invalid units last; sort valid units by descending sort key, then by FUN_0020e83c. */
s32 FUN_0020e8d0(const s32 *left, const s32 *right)
{
    s32 difference = 0;

    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
    } else if (*right < 0) {
        difference = -1;
    } else {
        SlotRecordA *first = gameGetSlotRecord(*left);
        SlotRecordA *second = gameGetSlotRecord(*right);
        difference = second->maxMp - first->maxMp;
        if (difference == 0) {
            return FUN_0020e83c(left, right);
        }
    }
    return difference;
}

} /* extern "C" */

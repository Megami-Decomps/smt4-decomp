#include "common.h"

extern "C" {

struct UnitSortRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 sortKey;
};

UnitSortRecord *gameGetSlotRecord(s32 index);
s32 FUN_002909f8(const s32 *left, const s32 *right);

/* Put invalid units last; sort valid units by ascending sort key, then by FUN_002909f8. */
s32 FUN_00290a8c(const s32 *left, const s32 *right)
{
    s32 difference = 0;

    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
    } else if (*right < 0) {
        difference = -1;
    } else {
        UnitSortRecord *first = gameGetSlotRecord(*left);
        UnitSortRecord *second = gameGetSlotRecord(*right);
        difference = first->sortKey - second->sortKey;
        if (difference == 0) {
            return FUN_002909f8(left, right);
        }
    }
    return difference;
}

} /* extern "C" */

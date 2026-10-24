#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {

struct UnitSortKeyRecord {
    /* 0x00 */ u8 unk00[0x0e];
    /* 0x0e */ s16 sortKey;
};

UnitSortKeyRecord *gameGetUnitRecord(s32 index);
s32 devilSortCompareUnitRankRaceId(const s32 *left, const s32 *right);

/* Put invalid units last; sort valid units by ascending sort key, then by devilSortCompareUnitRankRaceId. */
s32 FUN_0025cac0(const s32 *left, const s32 *right)
{
    s32 difference = 0;

    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
    } else if (*right < 0) {
        difference = -1;
    } else {
        UnitSortKeyRecord *first = gameGetUnitRecord(*left);
        UnitSortKeyRecord *second = gameGetUnitRecord(*right);
        difference = first->sortKey - second->sortKey;
        if (difference == 0) {
            return devilSortCompareUnitRankRaceId(left, right);
        }
    }
    return difference;
}

} /* extern "C" */

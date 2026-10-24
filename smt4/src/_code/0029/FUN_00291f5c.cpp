#include "common.h"

extern "C" {

struct UnitSortKeyRecord {
    /* 0x00 */ u8 unk00[0x0e];
    /* 0x0e */ s16 sortKey;
};

UnitSortKeyRecord *gameGetUnitRecord(s32 index);
s32 comparePartyUnitsByRankRaceAndId(const s32 *left, const s32 *right);

/* Put invalid units last; sort valid units by descending sort key, then by rank, race and ID. */
s32 FUN_00291f5c(const s32 *left, const s32 *right)
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
        difference = second->sortKey - first->sortKey;
        if (difference == 0) {
            return comparePartyUnitsByRankRaceAndId(left, right);
        }
    }
    return difference;
}

} /* extern "C" */

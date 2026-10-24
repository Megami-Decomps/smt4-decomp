#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {

GameUnitSortRecord *gameGetUnitRecord(s32 index);
s32 comparePartyUnitsByRankRaceAndId(const s32 *left, const s32 *right);

/* Put invalid units last; sort valid units by descending sort key, then by rank, race and ID. */
s32 FUN_0019215c(const s32 *left, const s32 *right)
{
    s32 difference = 0;

    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
    } else if (*right < 0) {
        difference = -1;
    } else {
        GameUnitSortRecord *first = gameGetUnitRecord(*left);
        GameUnitSortRecord *second = gameGetUnitRecord(*right);
        difference = second->sortKey - first->sortKey;
        if (difference == 0) {
            return comparePartyUnitsByRankRaceAndId(left, right);
        }
    }
    return difference;
}

} /* extern "C" */

#include "common.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {


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
        StatBlock *first = gameGetUnitRecord(*left);
        StatBlock *second = gameGetUnitRecord(*right);
        difference = second->maxHp - first->maxHp;
        if (difference == 0) {
            return comparePartyUnitsByRankRaceAndId(left, right);
        }
    }
    return difference;
}

} /* extern "C" */

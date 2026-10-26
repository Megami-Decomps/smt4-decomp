/* NON_MATCHING: initial input-pointer moves and first load use a different register. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 comparePartyUnitsByRankRaceAndId(const s32 *left, const s32 *right);

// Sort valid party slots by race, then by the standard rank/race/id order.
s32 FUN_001b18f0(const s32 *left, const s32 *right)
{
    s32 result = 0;
    if (*left < 0) {
        if (*right >= 0)
            result = 1;
    } else if (*right < 0) {
        result = -1;
    } else {
        GameUnitSortRecord *leftUnit = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*left));
        GameUnitSortRecord *rightUnit = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*right));
        DevilSortRecord *leftDevil = devilGetRecord(leftUnit->id);
        DevilSortRecord *rightDevil = devilGetRecord(rightUnit->id);
        result = leftDevil->race - rightDevil->race;
        if (result == 0)
            return comparePartyUnitsByRankRaceAndId(left, right);
    }
    return result;
}
}

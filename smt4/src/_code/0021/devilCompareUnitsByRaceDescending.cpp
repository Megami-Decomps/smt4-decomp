#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 devilSortCompareUnitRankRaceId(const s32 *left, const s32 *right);

// Sort valid units by descending race, with the rank/race/id comparator as a tie break.
s32 devilCompareUnitsByRaceDescending(const s32 *left, const s32 *right)
{
    s32 result;
    if (*left < 0) {
        if (*right < 0)
            result = 0;
        else
            result = 1;
    } else if (*right < 0) {
        result = -1;
    } else {
        StatBlock *leftUnit = gameGetUnitRecord(*left);
        StatBlock *rightUnit = gameGetUnitRecord(*right);
        DevilRecord *leftDevil = devilGetRecord(leftUnit->id);
        DevilRecord *rightDevil = devilGetRecord(rightUnit->id);
        result = rightDevil->race - leftDevil->race;
        if (result == 0)
            return devilSortCompareUnitRankRaceId(left, right);
    }
    return result;
}
}

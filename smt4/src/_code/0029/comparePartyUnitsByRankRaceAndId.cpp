/* NON_MATCHING: retail copies the first input pointer to r2 before the prologue; this equivalent comparator loads through r0 directly. */
#include "common.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"


// Put invalid units last; sort valid units by descending rank, race and ID.
extern "C" s32 comparePartyUnitsByRankRaceAndId(const s32 *left, const s32 *right)
{
    s32 difference = 0;
    if (*left < 0) {
        if (*right >= 0)
            difference = 1;
        return difference;
    }
    if (*right < 0)
        return -1;
    GameUnitSortRecord *first = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*left));
    GameUnitSortRecord *second = static_cast<GameUnitSortRecord *>(gameGetUnitRecord(*right));
    difference = second->rank - first->rank;
    if (difference != 0)
        return difference;
    DevilSortRecord *firstDevil = devilGetRecord(first->id);
    DevilSortRecord *secondDevil = devilGetRecord(second->id);
    difference = firstDevil->race - secondDevil->race;
    if (difference != 0)
        return difference;
    return first->id - second->id;
}

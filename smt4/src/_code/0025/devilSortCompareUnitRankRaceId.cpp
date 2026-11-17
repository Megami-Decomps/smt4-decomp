#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"


/* Empty slots sort last; ties use rank, reverse race, then reverse demon id. */
extern "C" s32 devilSortCompareUnitRankRaceId(const s32 *left, const s32 *right)
{
    s32 difference = 0;
    if (*left < 0) {
        if (*right >= 0) {
            difference = 1;
        }
    } else if (*right < 0) {
        difference = -1;
    } else {
        const StatBlock *first = gameGetUnitRecord(*left);
        const StatBlock *second = gameGetUnitRecord(*right);
        difference = first->level - second->level;
        if (difference == 0) {
            const NkmBaseRecord *firstDevil = nkmBaseGetRecord(first->id);
            const NkmBaseRecord *secondDevil = nkmBaseGetRecord(second->id);
            difference = secondDevil->race - firstDevil->race;
            if (difference == 0) {
                return second->id - first->id;
            }
        }
    }
    return difference;
}

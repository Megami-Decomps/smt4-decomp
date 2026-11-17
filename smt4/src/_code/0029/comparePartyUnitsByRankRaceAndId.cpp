#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/UnitRecordAccess.h"


/* Empty slots sort last; valid units by descending rank, then race, then demon id. */
extern "C" s32 comparePartyUnitsByRankRaceAndId(const s32 *left, const s32 *right)
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
        difference = second->level - first->level;
        if (difference == 0) {
            const NkmBaseRecord *firstDevil = nkmBaseGetRecord(first->id);
            const NkmBaseRecord *secondDevil = nkmBaseGetRecord(second->id);
            difference = firstDevil->race - secondDevil->race;
            if (difference == 0) {
                return first->id - second->id;
            }
        }
    }
    return difference;
}

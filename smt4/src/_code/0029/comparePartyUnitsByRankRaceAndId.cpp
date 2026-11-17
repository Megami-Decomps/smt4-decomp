#include "shard/W6_W6Match5_DevilSort.h"

extern "C" GameUnitSortRecord *gameGetUnitRecord(s32 index);

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
        const GameUnitSortRecord *first = gameGetUnitRecord(*left);
        const GameUnitSortRecord *second = gameGetUnitRecord(*right);
        difference = second->rank - first->rank;
        if (difference == 0) {
            const DevilRecord *firstDevil = devilGetRecord(first->id);
            const DevilRecord *secondDevil = devilGetRecord(second->id);
            difference = firstDevil->race - secondDevil->race;
            if (difference == 0) {
                return first->id - second->id;
            }
        }
    }
    return difference;
}

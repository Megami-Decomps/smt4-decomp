/* NON_MATCHING: ARMCC removes retail's initial mov r2,r0 receiver copy; the remaining comparator body shifts by one instruction. */
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" GameUnitSortRecord *gameGetUnitRecord(s32 index);

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
        const GameUnitSortRecord *first = gameGetUnitRecord(*left);
        const GameUnitSortRecord *second = gameGetUnitRecord(*right);
        difference = first->rank - second->rank;
        if (difference == 0) {
            const DevilSortRecord *firstDevil = devilGetRecord(first->id);
            const DevilSortRecord *secondDevil = devilGetRecord(second->id);
            difference = secondDevil->race - firstDevil->race;
            if (difference == 0) {
                return second->id - first->id;
            }
        }
    }
    return difference;
}

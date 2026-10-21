#include "shard/W6_W6Match5_DevilSort.h"

// Sorts by rank descending, demon level ascending, then entry ID descending.
extern "C" s32 devilCompareRankDescendingLevelAscending(const RankedDevilEntry* first, const RankedDevilEntry* second)
{
    s32 order = second->rank - first->rank;
    if (order == 0) {
        DevilSortRecord* a = devilGetRecord(first->id);
        DevilSortRecord* b = devilGetRecord(second->id);
        order = a->level - b->level;
        if (order == 0) {
            order = second->id - first->id;
        }
    }
    return order;
}

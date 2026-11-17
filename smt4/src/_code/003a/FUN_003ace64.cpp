#include "shard/W6_W6Match5_DevilSort.h"


// Sort by the entry's rank, then descending demon level and ascending ID.
extern "C" s32 FUN_003ace64(const RankedDevilEntry *first, const RankedDevilEntry *second)
{
    s32 order = first->rank - second->rank;
    if (order == 0) {
        DevilRecord *firstRecord = devilGetRecord(first->id);
        DevilRecord *secondRecord = devilGetRecord(second->id);
        order = secondRecord->level - firstRecord->level;
        if (order == 0)
            order = first->id - second->id;
    }
    return order;
}

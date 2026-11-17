#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/RankedDevilEntry.h"

// Sort by entry rank, descending demon level, then ascending ID.
extern "C" s32 btlDevilCompareRankOrderAndId(const RankedDevilEntry *first, const RankedDevilEntry *second)
{
    s32 order = first->rank - second->rank;
    if (order == 0) {
        const NkmBaseRecordA *firstRecord = nkmBaseGetRecord(first->id);
        const NkmBaseRecordA *secondRecord = nkmBaseGetRecord(second->id);
        order = secondRecord->level - firstRecord->level;
        if (order == 0)
            order = first->id - second->id;
    }
    return order;
}

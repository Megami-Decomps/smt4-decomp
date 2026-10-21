#include "shard/W6_W6Match2_RankedTableRecord.h"

// Sorts IDs by ascending table rank, then descending explicit order.
extern "C" s32 dataTable08CompareRankAscending(const u16* first, const u16* second)
{
    RankedTableRecord* a = dataTable08Sub2GetRecord(*first);
    RankedTableRecord* b = dataTable08Sub2GetRecord(*second);
    s32 order = a->rank - b->rank;
    if (order == 0) {
        a = dataTable08Sub2GetRecord(*first);
        b = dataTable08Sub2GetRecord(*second);
        order = b->order - a->order;
    }
    return order;
}

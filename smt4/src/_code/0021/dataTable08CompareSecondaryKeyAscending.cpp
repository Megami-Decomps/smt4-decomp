#include "shard/W6_W6Match1_RankedTableKey.h"

// Compares the secondary table key ascending, then the table's explicit order ascending.
extern "C" s32 dataTable08CompareSecondaryKeyAscending(const u16* first, const u16* second)
{
    RankedTableRecord* a = dataTable08Sub2GetRecord(*first);
    RankedTableRecord* b = dataTable08Sub2GetRecord(*second);
    s32 order = rankedTableRecordGetSecondaryKey(a) - rankedTableRecordGetSecondaryKey(b);
    if (order == 0) {
        a = dataTable08Sub2GetRecord(*first);
        b = dataTable08Sub2GetRecord(*second);
        order = a->order - b->order;
    }
    return order;
}

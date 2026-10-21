#include "shard/W6_W6Match1_RankedTableKey.h"

// Sorts IDs by descending secondary table key, then descending explicit order.
extern "C" s32 dataTable08CompareSecondaryKeyDescending(const u16* first, const u16* second)
{
    RankedTableRecord* a = dataTable08Sub2GetRecord(*first);
    RankedTableRecord* b = dataTable08Sub2GetRecord(*second);
    s32 order = rankedTableRecordGetSecondaryKey(b) - rankedTableRecordGetSecondaryKey(a);
    if (order == 0) {
        a = dataTable08Sub2GetRecord(*first);
        b = dataTable08Sub2GetRecord(*second);
        order = b->order - a->order;
    }
    return order;
}

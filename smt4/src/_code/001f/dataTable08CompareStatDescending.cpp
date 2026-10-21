#include "shard/W6_W6Match2_RankedTableRecord.h"

// Compares the signed table stat descending, then the table's explicit order ascending.
extern "C" s32 dataTable08CompareStatDescending(const u16* first, const u16* second)
{
    RankedTableRecord* a = dataTable08Sub2GetRecord(*first);
    RankedTableRecord* b = dataTable08Sub2GetRecord(*second);
    s32 order = b->stats.value - a->stats.value;
    if (order == 0) {
        a = dataTable08Sub2GetRecord(*first);
        b = dataTable08Sub2GetRecord(*second);
        order = a->order - b->order;
    }
    return order;
}

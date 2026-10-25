/* NON_MATCHING: packed-ID extraction/address scheduling and nested comparator register lifetimes differ from retail. */
#include "shard/W6_W6Match8_FusionCompare.h"
#include "shard/W5_W5Match2_UniteWork.h"


static __inline s32 compareFusionPriority(const u32 *first, const u32 *second)
{
    const DevilRecordA *a = FUN_00184310(*first);
    const DevilRecordA *b = FUN_00184310(*second);
    s32 firstPriority = dataTableGetEntry0102Value(a->id);
    s32 secondPriority = dataTableGetEntry0102Value(b->id);
    s32 result = firstPriority - secondPriority;
    if (result == 0) {
        result = fusionCompareRaceLevelIdA(first, second);
    }
    return result;
}

// Sort fusion pairs by data-table priority, race, descending level and ID.
extern "C" s32 fusionComparePairsByTablePriority(const u16 *first, const u16 *second)
{
    UniteWork *list = g_unite;
    u32 firstId = list->pairList.pairs[*first].packedIds & 0x7fff;
    u32 secondId = list->pairList.pairs[*second].packedIds & 0x7fff;
    s32 result = compareFusionPriority(&firstId, &secondId);
    if (result == 0) {
        firstId = (list->pairList.pairs[*first].packedIds & 0x3fffffff) >> 15;
        secondId = (list->pairList.pairs[*second].packedIds & 0x3fffffff) >> 15;
        result = compareFusionPriority(&firstId, &secondId);
    }
    return result;
}

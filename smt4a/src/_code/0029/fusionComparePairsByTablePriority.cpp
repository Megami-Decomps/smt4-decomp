/* NON_MATCHING: retail forms the first packed-ID address with add #4096 (the build loads 0x13B8 from the pool), copies the first ID before each lookup, and loads the second half's IDs in the other order. */
#include "shard/W6_W6Match8_FusionCompare.h"
#include "shard/W5_W5Match2_UniteWork.h"


/* Orders two demons by their data-table priority, then by race, level and ID. */
static __inline s32 compareFusionPriority(u32 first, u32 second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(second);
    s32 firstPriority = dataTableGetEntry0102Value(a->id);
    s32 secondPriority = dataTableGetEntry0102Value(b->id);
    s32 result = firstPriority - secondPriority;
    if (result == 0) {
        result = fusionCompareRaceLevelIdA(&first, &second);
    }
    return result;
}

// Sort fusion pairs by data-table priority, race, descending level and ID.
extern "C" s32 fusionComparePairsByTablePriority(const u16 *first, const u16 *second)
{
    UniteWork *work = g_unite;
    u32 left = work->pairList.pairs[*first].packedIds;
    u32 right = work->pairList.pairs[*second].packedIds;
    s32 result = compareFusionPriority(left & 0x7FFF, right & 0x7FFF);
    if (result == 0) {
        left = work->pairList.pairs[*first].packedIds;
        right = work->pairList.pairs[*second].packedIds;
        result = compareFusionPriority((left & 0x3FFFFFFF) >> 15, (right & 0x3FFFFFFF) >> 15);
    }
    return result;
}

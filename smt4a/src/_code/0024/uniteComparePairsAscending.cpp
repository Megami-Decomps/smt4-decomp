/* NON_MATCHING: packed-pair address formation and inlined comparator register allocation differ from retail. */
#include "shard/W6_W6Match8_FusionCompare.h"

static __inline s32 compareFusionDevils(const u32 *first, const u32 *second)
{
    const DevilRecordA *a = FUN_00184310(*first);
    const DevilRecordA *b = FUN_00184310(*second);
    s32 result = a->level - b->level;
    if (result == 0) {
        result = fusionCompareRaceLevelIdA(first, second);
    }
    return result;
}

// Sort fusion pairs lexicographically by their first and second demons.
extern "C" s32 uniteComparePairsAscending(const u16 *first, const u16 *second)
{
    UniteWork *list = g_unite;
    u32 firstId = list->pairList.pairs[*first].packedIds & 0x7fff;
    u32 secondId = list->pairList.pairs[*second].packedIds & 0x7fff;
    s32 result = compareFusionDevils(&firstId, &secondId);
    if (result == 0) {
        firstId = (list->pairList.pairs[*first].packedIds & 0x3fffffff) >> 15;
        secondId = (list->pairList.pairs[*second].packedIds & 0x3fffffff) >> 15;
        result = compareFusionDevils(&firstId, &secondId);
    }
    return result;
}

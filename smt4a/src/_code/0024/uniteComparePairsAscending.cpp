#include "shard/W6_W6Match8_FusionCompare.h"

/* Order two demons by level, then by race, descending level, and demon id. */
static __inline s32 compareFusionDevils(const u16 *first, const u16 *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(*first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*second);
    s32 order = a->level - b->level;
    if (order == 0) {
        order = fusionCompareRaceLevelIdA(first, second);
    }
    return order;
}

/* Sort fusion pairs lexicographically by their first and second demons. */
extern "C" s32 uniteComparePairsAscending(const u16 *first, const u16 *second)
{
    UniteWorkA *list = g_unite;
    u16 firstId = list->pairList.pairs[*first].packedIds & 0x7FFF;
    u16 secondId = list->pairList.pairs[*second].packedIds & 0x7FFF;
    s32 result = compareFusionDevils(&firstId, &secondId);
    if (result == 0) {
        firstId = (list->pairList.pairs[*first].packedIds & 0x3FFFFFFF) >> 15;
        secondId = (list->pairList.pairs[*second].packedIds & 0x3FFFFFFF) >> 15;
        result = compareFusionDevils(&firstId, &secondId);
    }
    return result;
}

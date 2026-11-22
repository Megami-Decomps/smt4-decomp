#include "shard/W6_W6Match8_FusionCompare.h"
#include "camp/Unite/UniteWork.h"

/* FUN_002b2ca8's body: orders two demon ids by their data-table priority, then by race, level
 * (higher first) and id. */
static __inline s32 compareFusionPriority(const u16 *first, const u16 *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(*first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*second);
    s32 firstPriority = dataTableGetEntry0102Value(a->id);
    s32 secondPriority = dataTableGetEntry0102Value(b->id);
    s32 result = firstPriority - secondPriority;
    if (result == 0) {
        result = fusionCompareRaceLevelIdA(first, second);
    }
    return result;
}

/* Sort fusion pairs by data-table priority, race, descending level and ID. */
extern "C" s32 fusionComparePairsByTablePriority(const u16 *first, const u16 *second)
{
    UniteWorkA *work = g_unite;
    u16 left = work->pairList.pairs[*first].packedIds & 0x7FFF;
    u16 right = work->pairList.pairs[*second].packedIds & 0x7FFF;
    s32 result = compareFusionPriority(&left, &right);
    if (result == 0) {
        left = (work->pairList.pairs[*first].packedIds & 0x3FFFFFFF) >> 15;
        right = (work->pairList.pairs[*second].packedIds & 0x3FFFFFFF) >> 15;
        result = compareFusionPriority(&left, &right);
    }
    return result;
}

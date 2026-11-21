/* NON_MATCHING: with FUN_002b2ca8's comparator inlined on the two id copies, only allocation differs: retail keeps the first id copy in r9 and its record in r5 (ours swapped), and in the second half the two id copies in r5/r6 the other way round. */
#include "shard/W6_W6Match8_FusionCompare.h"
#include "camp/Unite/UniteWork.h"

/* FUN_002b2ca8's body: orders two demon ids by their data-table priority, then by race, level
 * (higher first) and id. */
static __inline s32 compareFusionPriority(const u16 *first, const u16 *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(*first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*second);
    s32 result = dataTableGetEntry0102Value(a->id) - dataTableGetEntry0102Value(b->id);
    if (result == 0) {
        a = nkmBaseGetRecord(*first);
        b = nkmBaseGetRecord(*second);
        result = a->race - b->race;
        if (result == 0) {
            result = b->level - a->level;
            if (result == 0) {
                result = a->id - b->id;
            }
        }
    }
    return result;
}

// Sort fusion pairs by data-table priority, race, descending level and ID.
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

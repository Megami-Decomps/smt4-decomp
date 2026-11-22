#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

/* Orders two demons by descending race, then ascending level, then descending id. */
static __inline s32 compareFusionDemons(const u16 *first, const u16 *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(*first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*second);
    s32 order = b->race - a->race;
    if (order != 0)
        return order;
    order = a->level - b->level;
    if (order != 0)
        return order;
    return b->id - a->id;
}

/* Sort fusion pairs by the race (descending), level and id of each ingredient. */
extern "C" s32 fusionComparePairsByRaceLevelAndIdDescending(const u16 *first, const u16 *second)
{
    UniteWorkA *work = g_unite;
    u16 leftId = work->pairList.pairs[*first].packedIds & 0x7FFF;
    u16 rightId = work->pairList.pairs[*second].packedIds & 0x7FFF;
    s32 result = compareFusionDemons(&leftId, &rightId);
    if (result == 0) {
        leftId = (work->pairList.pairs[*first].packedIds & 0x3FFFFFFF) >> 15;
        rightId = (work->pairList.pairs[*second].packedIds & 0x3FFFFFFF) >> 15;
        result = compareFusionDemons(&leftId, &rightId);
    }
    return result;
}

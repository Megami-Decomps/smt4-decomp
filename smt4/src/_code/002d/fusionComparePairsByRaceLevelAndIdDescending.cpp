#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Orders two demons by descending race, then ascending level, then descending id. */
static inline s32 compareFusionDemons(u16 first, u16 second)
{
    const NkmBaseRecord *a = nkmBaseGetRecord(first);
    const NkmBaseRecord *b = nkmBaseGetRecord(second);
    s32 order = b->race - a->race;
    if (order != 0)
        return order;
    order = a->level - b->level;
    if (order != 0)
        return order;
    return b->id - a->id;
}

/* Sort fusion pairs by their first, then their second component (descending race, ascending level, descending id). */
extern "C" s32 fusionComparePairsByRaceLevelAndIdDescending(const u16 *first, const u16 *second)
{
    UniteWork *work = g_unite;
    u16 firstId = work->pairListIV.pairs[*first].firstId;
    u16 secondId = work->pairListIV.pairs[*second].firstId;
    s32 order = compareFusionDemons(firstId, secondId);
    if (order == 0) {
        order = compareFusionDemons(work->pairListIV.pairs[*first].secondId,
                                    work->pairListIV.pairs[*second].secondId);
    }
    return order;
}

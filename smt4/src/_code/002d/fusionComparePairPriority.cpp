#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

static __inline s32 comparePairMember(u16 firstId, u16 secondId)
{
    const NkmBaseRecord *first = nkmBaseGetRecord(firstId);
    const NkmBaseRecord *second = nkmBaseGetRecord(secondId);
    s32 result = second->race - first->race;
    if (result == 0) {
        result = first->level - second->level;
        if (result == 0)
            result = second->id - first->id;
    }
    return result;
}

/* Sorts fusion pairs by descending priority, then by each ingredient's race, level and ID. */
extern "C" s32 fusionComparePairPriority(const u16 *first, const u16 *second)
{
    s32 result = g_unite->pairScoresIV.scores[*second] - g_unite->pairScoresIV.scores[*first];
    if (result == 0) {
        const UniteWork *work = g_unite;
        result = comparePairMember(work->pairListIV.pairs[*first].firstId,
                                   work->pairListIV.pairs[*second].firstId);
        if (result == 0) {
            result = comparePairMember(work->pairListIV.pairs[*first].secondId,
                                       work->pairListIV.pairs[*second].secondId);
        }
    }
    return result;
}

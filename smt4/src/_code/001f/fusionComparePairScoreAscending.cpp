#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

static __inline s32 compareFusionComponent(u16 leftId, u16 rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(rightId);
    s32 difference = left->race - right->race;
    if (difference == 0) {
        difference = right->level - left->level;
        if (difference == 0)
            difference = left->id - right->id;
    }
    return difference;
}
extern "C" {

/* Sorts fusion pairs by score, then each component's race, descending level and ID. */
s32 fusionComparePairScoreAscending(const u16 *left, const u16 *right)
{
    s32 difference = g_unite->pairScoresIV.scores[*left] - g_unite->pairScoresIV.scores[*right];
    if (difference == 0) {
        const UniteWork *work = g_unite;
        difference = compareFusionComponent(work->pairListIV.pairs[*left].firstId,
                                            work->pairListIV.pairs[*right].firstId);
        if (difference == 0)
            difference = compareFusionComponent(work->pairListIV.pairs[*left].secondId,
                                                work->pairListIV.pairs[*right].secondId);
    }
    return difference;
}
} /* extern "C" */

#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Tie-break two demons by descending race, then level, then descending demon id. */
static __inline s32 compareFusionDetailsDescending(const u16 *leftId, const u16 *rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(*leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(*rightId);
    s32 result = right->race - left->race;
    if (result == 0) {
        result = left->level - right->level;
        if (result == 0)
            result = right->id - left->id;
    }
    return result;
}

/* Order two demons by descending priority, then by their details. */
static __inline s32 compareFusionDemons(const u16 *leftId, const u16 *rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(*leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(*rightId);
    s32 leftRank = dataTableGetEntry0102Value(left->id);
    s32 rightRank = dataTableGetEntry0102Value(right->id);
    s32 result = rightRank - leftRank;
    if (result == 0)
        result = compareFusionDetailsDescending(leftId, rightId);
    return result;
}

extern "C" {

/* Sort pair-list indices by their first parent, then their second parent, in descending order. */
s32 fusionComparePairsByParentPriorityDescending(const u16 *left, const u16 *right)
{
    UniteWork *work = g_unite;
    u16 leftId = work->pairListIV.pairs[*left].firstId;
    u16 rightId = work->pairListIV.pairs[*right].firstId;
    s32 result = compareFusionDemons(&leftId, &rightId);
    if (result == 0) {
        leftId = work->pairListIV.pairs[*left].secondId;
        rightId = work->pairListIV.pairs[*right].secondId;
        result = compareFusionDemons(&leftId, &rightId);
    }
    return result;
}
}

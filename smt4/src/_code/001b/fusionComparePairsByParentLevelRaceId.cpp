#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Tie-break two demons by race, then descending level, then demon id. */
static __inline s32 compareParentDetails(const u16 *leftId, const u16 *rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(*leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(*rightId);
    s32 difference = left->race - right->race;
    if (difference == 0) {
        difference = right->level - left->level;
        if (difference == 0)
            difference = left->id - right->id;
    }
    return difference;
}

/* Order two demons by level, then by their details. */
static __inline s32 compareParent(const u16 *leftId, const u16 *rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(*leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(*rightId);
    s32 difference = left->level - right->level;
    if (difference == 0)
        difference = compareParentDetails(leftId, rightId);
    return difference;
}

extern "C" {

/* Sort pair-list indices by their first parent, then their second parent. */
s32 fusionComparePairsByParentLevelRaceId(const u16 *left, const u16 *right)
{
    UniteWork *work = g_unite;
    u16 leftId = work->pairListIV.pairs[*left].firstId;
    u16 rightId = work->pairListIV.pairs[*right].firstId;
    s32 difference = compareParent(&leftId, &rightId);
    if (difference == 0) {
        leftId = static_cast<u16>(work->pairListIV.pairs[*left].secondId);
        rightId = static_cast<u16>(work->pairListIV.pairs[*right].secondId);
        difference = compareParent(&leftId, &rightId);
    }
    return difference;
}
}

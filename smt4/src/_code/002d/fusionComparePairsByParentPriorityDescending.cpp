/* NON_MATCHING: register lifetimes of the member ids differ (retail keeps a second copy of each id for the reloads: r9, and r5/r7 in the second pass); the Apocalypse twin fusionComparePackedPairsByMappedKey has the same difference. */
#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Tie-break two demons by descending race, then level, then descending demon id. */
static __inline s32 compareFusionDetailsDescending(u16 leftId, u16 rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(rightId);
    s32 result = right->race - left->race;
    if (result == 0) {
        result = left->level - right->level;
        if (result == 0)
            result = right->id - left->id;
    }
    return result;
}

/* Order two demons by descending priority, then by their details. */
static __inline s32 compareFusionDemons(u16 leftId, u16 rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(rightId);
    s32 leftRank = dataTableGetEntry0102Value(left->id);
    s32 result = dataTableGetEntry0102Value(right->id) - leftRank;
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
    s32 result = compareFusionDemons(leftId, rightId);
    if (result == 0) {
        leftId = work->pairListIV.pairs[*left].secondId;
        rightId = work->pairListIV.pairs[*right].secondId;
        result = compareFusionDemons(leftId, rightId);
    }
    return result;
}
}

#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Tie-break two demons by descending race, then level, then descending demon id. */
static __inline s32 compareFusionDevilDetails(const u16 *leftId, const u16 *rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(*leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(*rightId);
    s32 difference = right->race - left->race;
    if (difference == 0) {
        difference = left->level - right->level;
        if (difference == 0)
            difference = right->id - left->id;
    }
    return difference;
}

/* Order two demons by descending level, then by their details. */
static __inline s32 compareFusionDevils(const u16 *leftId, const u16 *rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(*leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(*rightId);
    s32 difference = right->level - left->level;
    if (difference == 0)
        difference = compareFusionDevilDetails(leftId, rightId);
    return difference;
}

extern "C" {

// Sort fusion pairs lexicographically by their first and second demons, descending.
s32 uniteComparePairsDescending(const u16 *left, const u16 *right)
{
    UniteWork *work = g_unite;
    u16 leftId = work->pairListIV.pairs[*left].firstId;
    u16 rightId = work->pairListIV.pairs[*right].firstId;
    s32 difference = compareFusionDevils(&leftId, &rightId);
    if (difference == 0) {
        leftId = static_cast<u16>(work->pairListIV.pairs[*left].secondId);
        rightId = static_cast<u16>(work->pairListIV.pairs[*right].secondId);
        difference = compareFusionDevils(&leftId, &rightId);
    }
    return difference;
}
}

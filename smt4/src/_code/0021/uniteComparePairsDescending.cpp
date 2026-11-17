/* NON_MATCHING: written like the matched fusionComparePairsByRaceLevelAndId (shared UniteWork pairs, u16 ids); the pair loads now match except that retail reads *left into r0 first and copies both ids (mov r9, r5; mov r8, r0) before the first nkmBaseGetRecord, where this build computes the left id into r8. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Tie-break two demons by descending race, then level, then descending demon id. */
static __inline s32 compareFusionDevilDetails(u16 leftId, u16 rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(rightId);
    s32 difference = right->race - left->race;
    if (difference == 0) {
        difference = left->level - right->level;
        if (difference == 0)
            difference = right->id - left->id;
    }
    return difference;
}

/* Order two demons by descending level, then by their details. */
static __inline s32 compareFusionDevils(u16 leftId, u16 rightId)
{
    const NkmBaseRecord *left = nkmBaseGetRecord(leftId);
    const NkmBaseRecord *right = nkmBaseGetRecord(rightId);
    s32 difference = right->level - left->level;
    if (difference == 0)
        difference = compareFusionDevilDetails(leftId, rightId);
    return difference;
}

extern "C" {
extern UniteWork *g_unite;

// Sort fusion pairs lexicographically by their first and second demons, descending.
s32 uniteComparePairsDescending(const u16 *left, const u16 *right)
{
    UniteWork *work = g_unite;
    u16 leftId = work->pairListIV.pairs[*left].firstId;
    u16 rightId = work->pairListIV.pairs[*right].firstId;
    s32 difference = compareFusionDevils(leftId, rightId);
    if (difference == 0)
        difference = compareFusionDevils(
            static_cast<u16>(work->pairListIV.pairs[*left].secondId),
            static_cast<u16>(work->pairListIV.pairs[*right].secondId));
    return difference;
}
}

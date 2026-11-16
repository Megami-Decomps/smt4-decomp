/* NON_MATCHING: written like the matched fusionComparePairsByRaceLevelAndId (shared UniteWork pairs, u16 ids); retail reads *left into r0 first and copies both ids (mov r9, r5; mov r8, r0) before the first devilGetRecord, where this build computes the left id into r8, which shifts the registers of the rest. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

/* Tie-break two demons by race, then descending level, then demon id. */
static __inline s32 compareParentDetails(u16 leftId, u16 rightId)
{
    const DevilSortRecord *left = devilGetRecord(leftId);
    const DevilSortRecord *right = devilGetRecord(rightId);
    s32 difference = left->race - right->race;
    if (difference == 0) {
        difference = right->level - left->level;
        if (difference == 0)
            difference = left->id - right->id;
    }
    return difference;
}

/* Order two demons by level, then by their details. */
static __inline s32 compareParent(u16 leftId, u16 rightId)
{
    const DevilSortRecord *left = devilGetRecord(leftId);
    const DevilSortRecord *right = devilGetRecord(rightId);
    s32 difference = left->level - right->level;
    if (difference == 0)
        difference = compareParentDetails(leftId, rightId);
    return difference;
}

extern "C" {
extern UniteWork *g_unite;

/* Sort pair-list indices by their first parent, then their second parent. */
s32 fusionComparePairsByParentLevelRaceId(const u16 *left, const u16 *right)
{
    UniteWork *work = g_unite;
    u16 leftId = work->pairListIV.pairs[*left].firstId;
    u16 rightId = work->pairListIV.pairs[*right].firstId;
    s32 difference = compareParent(leftId, rightId);
    if (difference == 0)
        difference = compareParent(
            static_cast<u16>(work->pairListIV.pairs[*left].secondId),
            static_cast<u16>(work->pairListIV.pairs[*right].secondId));
    return difference;
}
}

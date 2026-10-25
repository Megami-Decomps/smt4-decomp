#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

static __inline s32 compareFusionComponent(u16 leftId, u16 rightId)
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

extern "C" {
extern UniteWork *g_unite;

// Sort fusion pairs by each component's race, descending level, and demon id.
s32 fusionComparePairsByRaceLevelAndId(const u16 *left, const u16 *right)
{
    UniteWork *work = g_unite;
    u16 leftId = work->pairListIV.pairs[*left].firstId;
    u16 rightId = work->pairListIV.pairs[*right].firstId;
    s32 difference = compareFusionComponent(leftId, rightId);
    if (difference == 0)
        difference = compareFusionComponent(
            static_cast<u16>(work->pairListIV.pairs[*left].secondId),
            static_cast<u16>(work->pairListIV.pairs[*right].secondId));
    return difference;
}
}

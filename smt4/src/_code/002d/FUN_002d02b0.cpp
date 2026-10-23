/* NON_MATCHING: pair-field address folding and saved comparator ID/record registers differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {
extern UniteWork *g_unite;
s32 dataTableGetEntry0102Value(u16);
}

static __inline s32 compareFusionDemons(u16 leftId, u16 rightId)
{
    const DevilSortRecord *left = devilGetRecord(leftId);
    const DevilSortRecord *right = devilGetRecord(rightId);
    s32 leftRank = dataTableGetEntry0102Value(left->id);
    s32 result = dataTableGetEntry0102Value(right->id) - leftRank;
    if (result == 0) {
        left = devilGetRecord(leftId);
        right = devilGetRecord(rightId);
        result = right->race - left->race;
        if (result == 0) {
            result = left->level - right->level;
            if (result == 0)
                result = right->id - left->id;
        }
    }
    return result;
}

extern "C" s32 FUN_002d02b0(const u16 *left, const u16 *right)
{
    UniteWork *work = g_unite;
    s32 result = compareFusionDemons(work->pairListIV.pairs[*left].firstId,
                                    work->pairListIV.pairs[*right].firstId);
    if (result == 0)
        result = compareFusionDemons(work->pairListIV.pairs[*left].secondId,
                                     work->pairListIV.pairs[*right].secondId);
    return result;
}

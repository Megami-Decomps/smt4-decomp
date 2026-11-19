#include "gamedata/RankedSelection.h"
#include "battle/BattleHpRank.h"

extern "C" {
void qsort(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));

/* Chooses a requested score rank and counts selections of the corresponding result. */
s32 FUN_004e7b7c(void *owner, const SelectionScoreWork *work, SelectionResult *results,
                 s32 count, s32 rank)
{
    RankedSelection candidates[109];
    for (s32 i = 0; i < count; ++i) {
        RankedSelection *candidate = &candidates[i];
        candidate->index = i;
        candidate->score = work->scores[i].score;
    }
    s32 index;
    if (count < rank) {
        index = candidates[0].index;
    } else {
        qsort(candidates, count, sizeof(RankedSelection), reinterpret_cast<s32 (*)(const void *, const void *)>(callbackCompareDescendingState));
        index = candidates[rank - 1].index;
    }
    SelectionResult *result = &results[index];
    ++result->count;
    return result->id;
}
}

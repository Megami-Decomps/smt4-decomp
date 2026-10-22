/* NON_MATCHING: Candidate filling becomes a pointer/countdown loop instead of retail's indexed loop, increasing the saved-register set. */
#include "gamedata/RankedSelection.h"

extern "C" {
void qsort(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 callbackCompareDescendingState(const void *left, const void *right);

/* Chooses a requested score rank and counts selections of the corresponding result. */
s32 FUN_004e7b7c(void *owner, const SelectionScoreWork *work, SelectionResult *results,
                 s32 count, s32 rank)
{
    RankedSelection candidates[109];
    for (s32 i = 0; i < count; ++i) {
        candidates[i].index = i;
        candidates[i].score = work->scores[i].score;
    }
    s32 index;
    if (rank <= count) {
        qsort(candidates, count, sizeof(RankedSelection), callbackCompareDescendingState);
        index = candidates[rank - 1].index;
    } else {
        index = candidates[0].index;
    }
    SelectionResult *result = &results[index];
    ++result->count;
    return result->id;
}
}

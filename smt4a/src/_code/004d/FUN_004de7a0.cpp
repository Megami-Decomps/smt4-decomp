/* NON_MATCHING: only the allocation inside the two highest-score scan loops differs (retail keeps the best score in r1 and the best index in r2; the build uses r2/r3 with the score temporary in r1). */
#include "gamedata/RankedSelection.h"

extern "C" {
s32 lcgRandomRange(u32 limit);
s32 FUN_004e7b7c(void *owner, const SelectionScoreWork *work, SelectionResult *results, s32 count, s32 rank);
}

static inline s32 selectHighestScore(const SelectionScoreWork *work, SelectionResult *results, s32 count)
{
    u32 highest = 0;
    s32 selected = -1;
    for (s32 index = 0; index < count; ++index) {
        const SelectionScore *entry = &work->scores[index];
        u32 score = entry->score;
        if (score >= highest) {
            highest = score;
            selected = index;
        }
    }
    SelectionResult *result = &results[selected];
    ++result->count;
    return result->id;
}

// Randomly choose among the best score ranks, favoring the highest score.
extern "C" s32 FUN_004de7a0(void *owner, const SelectionScoreWork *work, SelectionResult *results, s32 count)
{
    s32 roll = lcgRandomRange(99);
    s32 result = 0;
    if (count >= 3) {
        if (roll < 30)
            result = FUN_004e7b7c(owner, work, results, count, 3);
        else if (roll < 65)
            result = FUN_004e7b7c(owner, work, results, count, 2);
        else
            result = selectHighestScore(work, results, count);
    } else if (count == 2) {
        if (roll < 40)
            result = FUN_004e7b7c(owner, work, results, count, 2);
        else
            result = selectHighestScore(work, results, count);
    }
    return result;
}

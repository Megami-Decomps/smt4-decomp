/* NON_MATCHING: highest-score scans become pointer/countdown loops, and armcc hoists the score-array base ahead of rank selection. */
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
        u32 score = work->scores[index].score;
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
    if (count >= 3) {
        if (roll < 30) {
            return FUN_004e7b7c(owner, work, results, count, 3);
        }
        if (roll < 65) {
            return FUN_004e7b7c(owner, work, results, count, 2);
        }
        return selectHighestScore(work, results, count);
    }
    if (count == 2) {
        if (roll < 40) {
            return FUN_004e7b7c(owner, work, results, count, 2);
        }
        return selectHighestScore(work, results, count);
    }
    return 0;
}

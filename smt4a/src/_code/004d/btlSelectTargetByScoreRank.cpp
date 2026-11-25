/* NON_MATCHING: the first maximum-score scan exchanges the maximum and candidate-score registers. */
#include "gamedata/RankedSelection.h"
#include "util/Random.h"

extern "C" {
s32 btlSelectTargetAtScoreRank(void *owner, const SelectionScoreWork *work, SelectionResult *results, s32 count, s32 rank);
}

/* Records the last candidate with the maximum score. The callers supply at least two candidates. */
static __inline s32 selectHighestScore(const SelectionScoreWork *work, SelectionResult *results, s32 count)
{
    u32 highest = 0;
    s32 selected = -1;
    s32 index = 0;
    do {
        const SelectionScore *entry = &work->scores[index];
        u32 score = entry->score;
        if (score >= highest) {
            highest = score;
            selected = index;
        }
    } while (++index < count);
    SelectionResult *result = &results[selected];
    return recordRankedSelection(result);
}

/* Randomly chooses among the best score ranks, favoring the highest score. */
extern "C" s32 btlSelectTargetByScoreRank(void *owner, const SelectionScoreWork *work, SelectionResult *results, s32 count)
{
    s32 roll = (s32)lcgRandomRange(99);
    s32 result = 0;
    if (count >= 3) {
        if (roll < 30)
            result = btlSelectTargetAtScoreRank(owner, work, results, count, 3);
        else if (roll < 65)
            result = btlSelectTargetAtScoreRank(owner, work, results, count, 2);
        else
            result = selectHighestScore(work, results, count);
    } else if (count == 2) {
        if (roll < 40)
            result = btlSelectTargetAtScoreRank(owner, work, results, count, 2);
        else
            result = selectHighestScore(work, results, count);
    }
    return result;
}

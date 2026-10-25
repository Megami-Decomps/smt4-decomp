/* NON_MATCHING: extracted ID/register lifetimes and second-ingredient helper inlining use different saved registers. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {
extern UniteWork *g_unite;
}

static inline s32 fusionCompareRaceLevelIdIV(u16 firstId, u16 secondId)
{
    const DevilSortRecord *first = devilGetRecord(firstId);
    const DevilSortRecord *second = devilGetRecord(secondId);
    s32 result = first->race - second->race;
    if (result == 0) {
        result = second->level - first->level;
        if (result == 0)
            result = first->id - second->id;
    }
    return result;
}

static inline s32 fusionComparePriorityIV(u16 firstId, u16 secondId)
{
    const DevilSortRecord *first = devilGetRecord(firstId);
    const DevilSortRecord *second = devilGetRecord(secondId);
    s32 result = dataTableGetEntry0102Value(first->id) - dataTableGetEntry0102Value(second->id);
    if (result == 0)
        result = fusionCompareRaceLevelIdIV(firstId, secondId);
    return result;
}

extern "C" {
// Compare candidate pairs lexicographically by ingredient priority, race, descending level and ID.
s32 FUN_001e1540(const u16 *firstIndex, const u16 *secondIndex)
{
    UniteWork *work = g_unite;
    u16 firstId = work->pairListIV.pairs[*firstIndex].firstId;
    u16 secondId = work->pairListIV.pairs[*secondIndex].firstId;
    s32 result = fusionComparePriorityIV(firstId, secondId);
    if (result == 0) {
        firstId = work->pairListIV.pairs[*firstIndex].secondId;
        secondId = work->pairListIV.pairs[*secondIndex].secondId;
        result = fusionComparePriorityIV(firstId, secondId);
    }
    return result;
}
}

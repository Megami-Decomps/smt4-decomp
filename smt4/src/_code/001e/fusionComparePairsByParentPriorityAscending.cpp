#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match5_DevilSort.h"

static __inline s32 fusionCompareRaceLevelIdIV(const u16 *firstId, const u16 *secondId)
{
    const NkmBaseRecord *first = nkmBaseGetRecord(*firstId);
    const NkmBaseRecord *second = nkmBaseGetRecord(*secondId);
    s32 result = first->race - second->race;
    if (result == 0) {
        result = second->level - first->level;
        if (result == 0)
            result = first->id - second->id;
    }
    return result;
}

static __inline s32 fusionComparePriorityIV(const u16 *firstId, const u16 *secondId)
{
    const NkmBaseRecord *first = nkmBaseGetRecord(*firstId);
    const NkmBaseRecord *second = nkmBaseGetRecord(*secondId);
    s32 firstPriority = dataTableGetEntry0102Value(first->id);
    s32 secondPriority = dataTableGetEntry0102Value(second->id);
    s32 result = firstPriority - secondPriority;
    if (result == 0)
        result = fusionCompareRaceLevelIdIV(firstId, secondId);
    return result;
}

extern "C" {
/* Compare candidate pairs lexicographically by ingredient priority, race, descending level and ID. */
s32 fusionComparePairsByParentPriorityAscending(const u16 *firstIndex, const u16 *secondIndex)
{
    UniteWork *work = g_unite;
    u16 firstId = work->pairListIV.pairs[*firstIndex].firstId;
    u16 secondId = work->pairListIV.pairs[*secondIndex].firstId;
    s32 result = fusionComparePriorityIV(&firstId, &secondId);
    if (result == 0) {
        firstId = work->pairListIV.pairs[*firstIndex].secondId;
        secondId = work->pairListIV.pairs[*secondIndex].secondId;
        result = fusionComparePriorityIV(&firstId, &secondId);
    }
    return result;
}
}

#include "camp/Unite/UniteWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

/* Compares fusion recipes by the result, then by each ingredient and its source type. */
extern "C" s32 fusionCompareRecipeByDemon(const UnitePairEntryIV *first, const UnitePairEntryIV *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(first->resultId);
    const NkmBaseRecordA *b = nkmBaseGetRecord(second->resultId);
    s32 result = a->race - b->race;
    if (result == 0)
        result = b->level - a->level;
    if (result == 0)
        result = first->resultId - second->resultId;
    a = nkmBaseGetRecord(first->firstId);
    b = nkmBaseGetRecord(second->firstId);
    if (result == 0)
        result = a->race - b->race;
    if (result == 0)
        result = b->level - a->level;
    if (result == 0)
        result = first->firstId - second->firstId;
    if (result == 0)
        result = first->firstType - second->firstType;
    a = nkmBaseGetRecord(first->secondId);
    b = nkmBaseGetRecord(second->secondId);
    if (result == 0)
        result = a->race - b->race;
    if (result == 0)
        result = b->level - a->level;
    if (result == 0)
        result = first->secondId - second->secondId;
    if (result == 0)
        result = first->secondType - second->secondType;
    return result;
}

#ifndef SHARD_W6_W6MATCH8_FUSION_COMPARE_H
#define SHARD_W6_W6MATCH8_FUSION_COMPARE_H

#include "camp/Unite/UniteGlobals.h"

#include "shard/W6_W6Match8_DevilRecordA.h"

static __inline s32 fusionCompareRaceLevelIdA(const u32 *first, const u32 *second)
{
    const NkmBaseRecordA *a = nkmBaseGetRecord(*first);
    const NkmBaseRecordA *b = nkmBaseGetRecord(*second);
    s32 result = a->race - b->race;
    if (result == 0) {
        result = b->level - a->level;
        if (result == 0) {
            result = a->id - b->id;
        }
    }
    return result;
}

/* Orders two fusion components by race, then by level (higher first), then by id; a sort in the
 * opposite direction passes them swapped. */
static __inline s32 fusionCompareComponentsA(const NkmBaseRecordA *left, const NkmBaseRecordA *right)
{
    s32 result = left->race - right->race;
    if (result != 0)
        return result;
    result = right->level - left->level;
    if (result != 0)
        return result;
    return left->id - right->id;
}

#endif

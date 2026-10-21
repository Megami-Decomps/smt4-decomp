#ifndef SHARD_W6_W6MATCH8_FUSION_COMPARE_H
#define SHARD_W6_W6MATCH8_FUSION_COMPARE_H

#include "shard/W5_W5Match2_UniteWork.h"

#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {
extern UniteWork *g_unite;
}

static __inline s32 fusionCompareRaceLevelIdA(const u32 *first, const u32 *second)
{
    const DevilRecordA *a = FUN_00184310(*first);
    const DevilRecordA *b = FUN_00184310(*second);
    s32 result = a->race - b->race;
    if (result == 0) {
        result = b->level - a->level;
        if (result == 0) {
            result = a->id - b->id;
        }
    }
    return result;
}

#endif

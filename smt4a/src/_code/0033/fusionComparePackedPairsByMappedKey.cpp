/* NON_MATCHING: pair-table address folding adds a 0x13b8 literal and member-ID/record register lifetimes differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" {
extern UniteWork *g_unite;
s32 dataTableGetEntry0102Value(u16 id);
}

static inline s32 compareFusionPairMember(u16 first, u16 second)
{
    const DevilRecordA *a = FUN_00184310(first);
    const DevilRecordA *b = FUN_00184310(second);
    s32 firstKey = dataTableGetEntry0102Value(a->id);
    s32 secondKey = dataTableGetEntry0102Value(b->id);
    s32 result = secondKey - firstKey;
    if (result == 0) {
        a = FUN_00184310(first);
        b = FUN_00184310(second);
        result = b->race - a->race;
        if (result == 0) {
            result = a->level - b->level;
            if (result == 0) {
                result = b->id - a->id;
            }
        }
    }
    return result;
}

extern "C" s32 fusionComparePackedPairsByMappedKey(const void *left, const void *right)
{
    const u16 *first = (const u16 *)left;
    const u16 *second = (const u16 *)right;
    UniteWork *work = g_unite;
    u32 firstPacked = work->pairList.pairs[*first].packedIds;
    u32 secondPacked = work->pairList.pairs[*second].packedIds;
    s32 result = compareFusionPairMember(firstPacked & 0x7fff, secondPacked & 0x7fff);
    if (result == 0) {
        firstPacked = work->pairList.pairs[*first].packedIds;
        secondPacked = work->pairList.pairs[*second].packedIds;
        result = compareFusionPairMember((firstPacked & 0x3fffffff) >> 15,
                                         (secondPacked & 0x3fffffff) >> 15);
    }
    return result;
}

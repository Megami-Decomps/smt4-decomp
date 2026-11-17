/* NON_MATCHING: written like fusionComparePairPriority/FUN_002b27d4; the first comparison matches, the second forms the second pair's address through a 0x13b8 literal in retail (ldr r1, [r1, r2]) where this build uses add #4096; ldr #952 for both. */
#include "shard/W6_W6Match8_FusionCompare.h"

static __inline s32 comparePairMember(u32 firstId, u32 secondId)
{
    const NkmBaseRecordA *first = nkmBaseGetRecord(firstId);
    const NkmBaseRecordA *second = nkmBaseGetRecord(secondId);
    s32 result = second->race - first->race;
    if (result == 0) {
        result = first->level - second->level;
        if (result == 0)
            result = second->id - first->id;
    }
    return result;
}

// Sort fusion pairs by the race (descending), level and id of each ingredient.
extern "C" s32 FUN_0034f0b4(const u16 *first, const u16 *second)
{
    UniteWorkA *work = g_unite;
    u32 left = work->pairList.pairs[*first].packedIds;
    u32 right = work->pairList.pairs[*second].packedIds;
    s32 result = comparePairMember(left & 0x7fff, right & 0x7fff);
    if (result == 0) {
        result = comparePairMember((work->pairList.pairs[*first].packedIds & 0x3fffffff) >> 15,
                                   (work->pairList.pairs[*second].packedIds & 0x3fffffff) >> 15);
    }
    return result;
}

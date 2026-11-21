/* NON_MATCHING: register lifetimes of the member ids differ (retail keeps a second copy of each id for the reloads: r9, and r5/r7 in the second pass). */
#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

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

static __inline s32 compareFusionPairMember(u32 firstId, u32 secondId)
{
    const NkmBaseRecordA *first = nkmBaseGetRecord(firstId);
    const NkmBaseRecordA *second = nkmBaseGetRecord(secondId);
    s32 firstKey = dataTableGetEntry0102Value(first->id);
    s32 secondKey = dataTableGetEntry0102Value(second->id);
    s32 result = secondKey - firstKey;
    if (result == 0)
        result = comparePairMember(firstId, secondId);
    return result;
}

extern "C" s32 fusionComparePackedPairsByMappedKey(const u16 *first, const u16 *second)
{
    UniteWorkA *work = g_unite;
    u16 firstId = work->pairList.pairs[*first].packedIds & 0x7fff;
    u16 secondId = work->pairList.pairs[*second].packedIds & 0x7fff;
    s32 result = compareFusionPairMember(firstId, secondId);
    if (result == 0) {
        firstId = (work->pairList.pairs[*first].packedIds & 0x3fffffff) >> 15;
        secondId = (work->pairList.pairs[*second].packedIds & 0x3fffffff) >> 15;
        result = compareFusionPairMember(firstId, secondId);
    }
    return result;
}

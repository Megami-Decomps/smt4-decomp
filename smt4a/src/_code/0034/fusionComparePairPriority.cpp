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

/* Sorts fusion pairs by descending priority, then by each ingredient's race, level and ID. */
extern "C" s32 fusionComparePairPriority(const u16 *first, const u16 *second)
{
    s32 result = (s32)g_unite->pairSort.pairScores[*second] - (s32)g_unite->pairSort.pairScores[*first];
    if (result == 0) {
        const UniteWorkA *work = g_unite;
        result = comparePairMember(work->pairList.pairs[*first].packedIds & 0x7fff,
                                   work->pairList.pairs[*second].packedIds & 0x7fff);
        if (result == 0) {
            result = comparePairMember((work->pairList.pairs[*first].packedIds & 0x3fffffff) >> 15,
                                       (work->pairList.pairs[*second].packedIds & 0x3fffffff) >> 15);
        }
    }
    return result;
}

#include "shard/W6_W6Match8_FusionCompare.h"

static __inline s32 comparePairMember(u32 firstId, u32 secondId)
{
    const DevilRecordA *first = FUN_00184310(firstId);
    const DevilRecordA *second = FUN_00184310(secondId);
    s32 result = second->race - first->race;
    if (result == 0) {
        result = first->level - second->level;
        if (result == 0)
            result = second->id - first->id;
    }
    return result;
}

// Sort fusion pairs by descending priority, then the race/level/id of each ingredient.
extern "C" s32 fusionComparePairPriority(const u16 *first, const u16 *second)
{
    struct PairPriorityView {
        u8 unk0000[0x73f0];
        s32 priorities[1]; // 0x73f0
    };
    UniteWork *work = g_unite;
    const PairPriorityView *priority = reinterpret_cast<const PairPriorityView *>(work);
    s32 result = priority->priorities[*second] - priority->priorities[*first];
    if (result == 0) {
        result = comparePairMember(work->pairList.pairs[*first].packedIds & 0x7fff,
                                   work->pairList.pairs[*second].packedIds & 0x7fff);
        if (result == 0) {
            result = comparePairMember((work->pairList.pairs[*first].packedIds & 0x3fffffff) >> 15,
                                       (work->pairList.pairs[*second].packedIds & 0x3fffffff) >> 15);
        }
    }
    return result;
}

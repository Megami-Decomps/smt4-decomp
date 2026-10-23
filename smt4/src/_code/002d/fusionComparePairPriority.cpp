#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" UniteWork *g_unite;

static __inline s32 comparePairMember(u16 firstId, u16 secondId)
{
    const DevilSortRecord *first = devilGetRecord(firstId);
    const DevilSortRecord *second = devilGetRecord(secondId);
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
        u8 unk0000[0x78a0];
        s32 priorities[1]; // 0x78a0
    };
    UniteWork *work = g_unite;
    const PairPriorityView *priority = reinterpret_cast<const PairPriorityView *>(work);
    s32 result = priority->priorities[*second] - priority->priorities[*first];
    if (result == 0) {
        result = comparePairMember(work->pairListIV.pairs[*first].firstId,
                                   work->pairListIV.pairs[*second].firstId);
        if (result == 0) {
            result = comparePairMember(work->pairListIV.pairs[*first].secondId,
                                       work->pairListIV.pairs[*second].secondId);
        }
    }
    return result;
}

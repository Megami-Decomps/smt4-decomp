#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

extern "C" UniteWork *g_unite;

static inline s32 compareFusionDemons(u32 first, u32 second)
{
    const DevilRecordA *a = FUN_00184310(first);
    const DevilRecordA *b = FUN_00184310(second);
    s32 order = s32(a->race) - s32(b->race);
    if (order == 0) {
        order = s32(b->level) - s32(a->level);
        if (order == 0) {
            order = s32(a->id) - s32(b->id);
        }
    }
    return order;
}

extern "C" s32 FUN_002b27d4(const u16 *first, const u16 *second)
{
    UniteWork *work = g_unite;
    u32 left = work->pairList.pairs[*first].packedIds;
    u32 right = work->pairList.pairs[*second].packedIds;
    s32 order = compareFusionDemons(left & 0x7FFF, right & 0x7FFF);
    if (order == 0) {
        right = work->pairList.pairs[*second].packedIds;
        left = work->pairList.pairs[*first].packedIds;
        order = compareFusionDemons((left & 0x3FFFFFFF) >> 15, (right & 0x3FFFFFFF) >> 15);
    }
    return order;
}

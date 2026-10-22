/* NON_MATCHING: fusion-pair array base and second-ID extraction use different address registers. */
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
    s32 order = compareFusionDemons(work->pairList.pairs[*first].packedIds & 0x7FFF,
                                   work->pairList.pairs[*second].packedIds & 0x7FFF);
    if (order == 0) {
        order = compareFusionDemons((work->pairList.pairs[*first].packedIds >> 15) & 0x7FFF,
                                    (work->pairList.pairs[*second].packedIds >> 15) & 0x7FFF);
    }
    return order;
}

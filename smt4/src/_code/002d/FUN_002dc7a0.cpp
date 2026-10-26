/* NON_MATCHING: fusion-pair array base and packed-ID extraction use different address registers. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" UniteWork *g_unite;

static inline s32 compareFusionDemons(u16 first, u16 second)
{
    const DevilSortRecord *a = devilGetRecord(first);
    const DevilSortRecord *b = devilGetRecord(second);
    s32 order = s32(b->race) - s32(a->race);
    if (order == 0) {
        order = s32(a->level) - s32(b->level);
        if (order == 0) {
            order = s32(b->id) - s32(a->id);
        }
    }
    return order;
}

extern "C" s32 FUN_002dc7a0(const u16 *first, const u16 *second)
{
    UniteWork *work = g_unite;
    u16 firstId = work->pairListIV.pairs[*first].firstId;
    u16 secondId = work->pairListIV.pairs[*second].firstId;
    s32 order = compareFusionDemons(firstId, secondId);
    if (order == 0) {
        order = compareFusionDemons(work->pairListIV.pairs[*first].secondId,
                                    work->pairListIV.pairs[*second].secondId);
    }
    return order;
}

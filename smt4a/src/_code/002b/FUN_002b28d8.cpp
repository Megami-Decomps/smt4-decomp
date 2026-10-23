/* NON_MATCHING: comparator tie branches and packed-second-ID extraction allocate different registers. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {
extern UniteWork *g_unite;

// Sort fusion pairs by rank, then each component's category, level and identifier.
s32 FUN_002b28d8(const u16 *left, const u16 *right)
{
    struct PairRankView {
        u8 prefix[0x73F0];
        s32 values[1];
    };
    struct SortRecordView {
        u16 id;
        u8 category;
        u8 unk03[3];
        u16 level;
    };
    UniteWork *work = g_unite;
    PairRankView *ranks = reinterpret_cast<PairRankView *>(work);
    s32 result = ranks->values[*left] - ranks->values[*right];
    if (result == 0) {
        u16 leftId = work->pairList.pairs[*left].packedIds & 0x7FFF;
        u16 rightId = work->pairList.pairs[*right].packedIds & 0x7FFF;
        const SortRecordView *a = reinterpret_cast<SortRecordView *>(FUN_00184310(leftId));
        const SortRecordView *b = reinterpret_cast<SortRecordView *>(FUN_00184310(rightId));
        result = a->category - b->category;
        if (result == 0) {
            result = b->level - a->level;
            if (result == 0)
                result = a->id - b->id;
        }
        if (result == 0) {
            leftId = (work->pairList.pairs[*left].packedIds & 0x3FFFFFFF) >> 15;
            rightId = (work->pairList.pairs[*right].packedIds & 0x3FFFFFFF) >> 15;
            a = reinterpret_cast<SortRecordView *>(FUN_00184310(leftId));
            b = reinterpret_cast<SortRecordView *>(FUN_00184310(rightId));
            result = a->category - b->category;
            if (result == 0) {
                result = b->level - a->level;
                if (result == 0)
                    result = a->id - b->id;
            }
        }
    }
    return result;
}
}

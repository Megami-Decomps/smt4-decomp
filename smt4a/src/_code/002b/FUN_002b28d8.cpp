/* NON_MATCHING: initial left/right index loads use r1/r2 rather than retail r2/r1; component tie-break control flow now agrees. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

struct FusionSortRecord {
    u16 id;
    u8 category;
    u8 unk03[3];
    u16 level;
};

static inline s32 compareFusionComponents(const FusionSortRecord *left, const FusionSortRecord *right)
{
    s32 result = left->category - right->category;
    if (result != 0)
        return result;
    result = right->level - left->level;
    if (result != 0)
        return result;
    return left->id - right->id;
}

extern "C" {
extern UniteWork *g_unite;

// Sort fusion pairs by rank, then each component's category, level and identifier.
s32 FUN_002b28d8(const u16 *left, const u16 *right)
{
    struct PairRankView {
        u8 prefix[0x73F0];
        s32 values[1];
    };
    UniteWork *work = g_unite;
    PairRankView *ranks = reinterpret_cast<PairRankView *>(work);
    s32 result = ranks->values[*left] - ranks->values[*right];
    if (result == 0) {
        u16 leftId = work->pairList.pairs[*left].packedIds & 0x7FFF;
        u16 rightId = work->pairList.pairs[*right].packedIds & 0x7FFF;
        const FusionSortRecord *a = reinterpret_cast<FusionSortRecord *>(FUN_00184310(leftId));
        const FusionSortRecord *b = reinterpret_cast<FusionSortRecord *>(FUN_00184310(rightId));
        result = compareFusionComponents(a, b);
        if (result == 0) {
            leftId = (work->pairList.pairs[*left].packedIds & 0x3FFFFFFF) >> 15;
            rightId = (work->pairList.pairs[*right].packedIds & 0x3FFFFFFF) >> 15;
            a = reinterpret_cast<FusionSortRecord *>(FUN_00184310(leftId));
            b = reinterpret_cast<FusionSortRecord *>(FUN_00184310(rightId));
            result = compareFusionComponents(a, b);
        }
    }
    return result;
}
}

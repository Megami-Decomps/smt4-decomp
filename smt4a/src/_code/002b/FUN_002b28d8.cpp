#include "shard/W5_W5Match2_UniteWork.h"
#include "gamedata/DevilRecordA.h"

static inline s32 compareFusionComponents(const DevilRecordA *left, const DevilRecordA *right)
{
    s32 result = left->race - right->race;
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
        const DevilRecordA *a = devilGetRecord(leftId);
        const DevilRecordA *b = devilGetRecord(rightId);
        result = compareFusionComponents(a, b);
        if (result == 0) {
            leftId = (work->pairList.pairs[*left].packedIds & 0x3FFFFFFF) >> 15;
            rightId = (work->pairList.pairs[*right].packedIds & 0x3FFFFFFF) >> 15;
            a = devilGetRecord(leftId);
            b = devilGetRecord(rightId);
            result = compareFusionComponents(a, b);
        }
    }
    return result;
}
}

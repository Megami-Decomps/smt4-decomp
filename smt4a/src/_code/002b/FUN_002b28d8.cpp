#include "shard/W6_W6Match8_FusionCompare.h"

extern "C" {

// Sort fusion pairs by rank, then each component's category, level and identifier.
s32 FUN_002b28d8(const u16 *left, const u16 *right)
{
    struct PairRankView {
        u8 prefix[0x73F0];
        s32 values[1];
    };
    UniteWorkA *work = g_unite;
    PairRankView *ranks = reinterpret_cast<PairRankView *>(work);
    s32 result = ranks->values[*left] - ranks->values[*right];
    if (result == 0) {
        u16 leftId = work->pairList.pairs[*left].packedIds & 0x7FFF;
        u16 rightId = work->pairList.pairs[*right].packedIds & 0x7FFF;
        const NkmBaseRecordA *a = nkmBaseGetRecord(leftId);
        const NkmBaseRecordA *b = nkmBaseGetRecord(rightId);
        result = fusionCompareComponentsA(a, b);
        if (result == 0) {
            leftId = (work->pairList.pairs[*left].packedIds & 0x3FFFFFFF) >> 15;
            rightId = (work->pairList.pairs[*right].packedIds & 0x3FFFFFFF) >> 15;
            a = nkmBaseGetRecord(leftId);
            b = nkmBaseGetRecord(rightId);
            result = fusionCompareComponentsA(a, b);
        }
    }
    return result;
}
}

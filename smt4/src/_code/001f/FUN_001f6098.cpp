/* NON_MATCHING: initial global/ID loads are reordered and first/second index registers exchanged; all 75 instructions otherwise agree. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"

static __inline s32 compareFusionComponent(u16 leftId, u16 rightId)
{
    const DevilSortRecord *left = devilGetRecord(leftId);
    const DevilSortRecord *right = devilGetRecord(rightId);
    s32 difference = left->race - right->race;
    if (difference == 0) {
        difference = right->level - left->level;
        if (difference == 0)
            difference = left->id - right->id;
    }
    return difference;
}
extern "C" {
extern UniteWork *g_unite;

// Sort fusion pairs by score, then each component's race, descending level and ID.
s32 FUN_001f6098(const u16 *left, const u16 *right)
{
    struct PairScoreView {
        u8 unk0000[0x78a0];
        s32 scores[1]; // 0x78a0
    };
    UniteWork *work = g_unite;
    const PairScoreView *score = reinterpret_cast<const PairScoreView *>(work);
    s32 difference = score->scores[*left] - score->scores[*right];
    if (difference == 0) {
        difference = compareFusionComponent(work->pairListIV.pairs[*left].firstId,
                                            work->pairListIV.pairs[*right].firstId);
        if (difference == 0)
            difference = compareFusionComponent(work->pairListIV.pairs[*left].secondId,
                                                work->pairListIV.pairs[*right].secondId);
    }
    return difference;
}
}

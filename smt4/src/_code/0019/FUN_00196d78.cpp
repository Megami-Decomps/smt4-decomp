#include "shard/W5_W5Match2_UniteWork.h"
#include <stdlib.h>

union FusionPairBits {
    u64 packed;
    struct {
        u64 firstId : 15;
        u64 secondId : 15;
        u64 firstType : 2;
        u64 secondType : 2;
        u64 resultId : 15;
        u64 unknown : 15;
    } fields;
};

struct FusionSortPreferences {
    u8 unk00[0x13];
    u8 setting;     // 0x13: bit 7 clear = ascending; low bits = sort key
};

extern "C" {
extern UniteWork *g_unite;
FusionSortPreferences *FUN_002a0d0c(void);
s32 fusionComparePairsByRaceLevelAndId(const void *a, const void *b);
s32 FUN_002dc7a0(const void *a, const void *b);
s32 fusionComparePairsByParentLevelRaceId(const void *a, const void *b);
s32 uniteComparePairsDescending(const void *a, const void *b);
s32 FUN_001f6098(const void *a, const void *b);
s32 fusionComparePairPriority(const void *a, const void *b);
s32 FUN_001e1540(const void *a, const void *b);
s32 FUN_002d02b0(const void *a, const void *b);
u32 FUN_0029ce60(u32 id, s32 a, s32 b, s32 c, s32 d);
void FUN_002b7bca(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
void FUN_0027f3dc(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));

/* Sort the fusion pair list by the key the player selected. */
void FUN_00196d78(void)
{
    UniteWork *work = g_unite;
    const u8 *setting = &FUN_002a0d0c()->setting;
    bool ascending = (*setting & 0x80) == 0;
    if ((*setting & 0x7f) == 1) {
        if (ascending) {
            FUN_002b7bca(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), fusionComparePairsByRaceLevelAndId);
        } else {
            FUN_002b7bca(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), FUN_002dc7a0);
        }
    }
    if ((*setting & 0x7f) == 2) {
        if (ascending) {
            FUN_002b7bca(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), fusionComparePairsByParentLevelRaceId);
        } else {
            FUN_002b7bca(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), uniteComparePairsDescending);
        }
    }
    if ((*setting & 0x7f) == 7) {
        // Score every pair by the summed ids of its fused demons, then sort by score.
        for (u32 i = 0; i < work->pairSortIV.sortedCount; i++) {
            u16 index = work->pairSortIV.sortedPairs[i];
            const FusionPairBits *pair = (const FusionPairBits *)&work->pairSortIV.pairs[index];
            u32 score = 0;
            if (pair->fields.firstType == 3) {
                score = FUN_0029ce60(pair->fields.firstId, 1, 0, 0, 0);
            }
            if (pair->fields.secondType == 3) {
                score += FUN_0029ce60(pair->fields.secondId, 1, 0, 0, 0);
            }
            work->pairSortIV.pairScores[work->pairSortIV.sortedPairs[i]] = score;
        }
        if (ascending) {
            FUN_002b7bca(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), FUN_001f6098);
        } else {
            FUN_002b7bca(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), fusionComparePairPriority);
        }
    }
    if ((*setting & 0x7f) == 3) {
        if (ascending) {
            FUN_0027f3dc(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), FUN_001e1540);
        } else {
            FUN_0027f3dc(work->pairSortIV.sortedPairs, work->pairSortIV.sortedCount, sizeof(u16), FUN_002d02b0);
        }
    }
}
}

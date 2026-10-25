#include "shard/W5_W5Match2_UniteWork.h"
#include <stdlib.h>

// A fusion pair record read as one 64-bit value: the same layout as UnitePairEntryIV.
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
FusionSortPreferences *FUN_0026140c(void);
s32 FUN_002b27d4(const void *a, const void *b);
s32 FUN_0034f0b4(const void *a, const void *b);
s32 uniteComparePairsAscending(const void *a, const void *b);
s32 FUN_002fd93c(const void *a, const void *b);
s32 FUN_002b28d8(const void *a, const void *b);
s32 fusionComparePairPriority(const void *a, const void *b);
s32 fusionComparePairsByTablePriority(const void *a, const void *b);
s32 fusionComparePackedPairsByMappedKey(const void *a, const void *b);
u32 FUN_004a8750(u32 id, s32 a, s32 b, s32 c, s32 d);
void arraySortQsort(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));

/* Sort the fusion pair list by the key the player selected. */
void fusionSortPairs(void)
{
    UniteWork *work = g_unite;
    const u8 *setting = &FUN_0026140c()->setting;
    bool ascending = (*setting & 0x80) == 0;
    if ((*setting & 0x7f) == 1) {
        if (ascending) {
            qsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), FUN_002b27d4);
        } else {
            qsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), FUN_0034f0b4);
        }
    }
    if ((*setting & 0x7f) == 2) {
        if (ascending) {
            qsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), uniteComparePairsAscending);
        } else {
            qsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), FUN_002fd93c);
        }
    }
    if ((*setting & 0x7f) == 7) {
        // Score every pair by the summed ids of its fused demons, then sort by score.
        for (u32 i = 0; i < work->pairSort.sortedCount; i++) {
            u16 index = work->pairSort.sortedPairs[i];
            const FusionPairBits *pair = (const FusionPairBits *)&work->pairSort.pairs[index];
            u32 score = 0;
            if (pair->fields.firstType == 3) {
                score = FUN_004a8750(pair->fields.firstId, 1, 0, 0, 0);
            }
            FusionPairBits second;
            second.packed = pair->packed;
            if (second.fields.secondType == 3) {
                score += FUN_004a8750(pair->fields.secondId, 1, 0, 0, 0);
            }
            work->pairSort.pairScores[work->pairSort.sortedPairs[i]] = score;
        }
        if (ascending) {
            qsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), FUN_002b28d8);
        } else {
            qsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), fusionComparePairPriority);
        }
    }
    if ((*setting & 0x7f) == 3) {
        if (ascending) {
            arraySortQsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), fusionComparePairsByTablePriority);
        } else {
            arraySortQsort(work->pairSort.sortedPairs, work->pairSort.sortedCount, sizeof(u16), fusionComparePackedPairsByMappedKey);
        }
    }
}
}

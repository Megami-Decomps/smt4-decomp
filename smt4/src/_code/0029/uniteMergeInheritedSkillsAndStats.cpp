/* NON_MATCHING: prologue moves third-present flag with movne/moveq instead of mov #1 + moveq #0, and second parent's count increment swaps r1/r2 (14 diff lines). */
#include "common.h"
#include "shard/GameOptions.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" void bitsetSetBit(GameOptions *record, u32 bit);
extern "C" void unitRecalculateEffectiveStats(GameOptions *record);

// Merge inherited traits and saturating ancestor counts, then rebuild the result's stats.
extern "C" void uniteMergeInheritedSkillsAndStats(void *, const GameOptions *first, const GameOptions *second, const GameOptions *third, GameOptions *result)
{
    bool hasThird = third != NULL;
    if (hasThird) {
        for (s32 i = 0; i < 64; ++i) {
            result->inheritance.flags[i] = first->inheritance.flags[i];
            result->inheritance.flags[i] |= second->inheritance.flags[i];
            result->inheritance.flags[i] |= third->inheritance.flags[i];
        }
    } else {
        for (s32 i = 0; i < 64; ++i) {
            result->inheritance.flags[i] = first->inheritance.flags[i];
            result->inheritance.flags[i] |= second->inheritance.flags[i];
        }
    }
    bitsetSetBit(result, nkmBaseGetRecord(result->unk46)->innateFlag);
    if (hasThird) {
        for (s32 i = 0; i < 0x500; ++i) {
            s32 total = first->inheritance.counts[i] + second->inheritance.counts[i];
            total += third->inheritance.counts[i];
            if (total > 255)
                total = 255;
            result->inheritance.counts[i] = total;
        }
    } else {
        for (s32 i = 0; i < 0x500; ++i) {
            s32 total = first->inheritance.counts[i] + second->inheritance.counts[i];
            if (total > 255)
                total = 255;
            result->inheritance.counts[i] = total;
        }
    }
    if (result->inheritance.counts[first->unk46] < 255)
        ++result->inheritance.counts[first->unk46];
    if (result->inheritance.counts[second->unk46] < 255)
        ++result->inheritance.counts[second->unk46];
    if (hasThird && result->inheritance.counts[third->unk46] < 255)
        ++result->inheritance.counts[third->unk46];
    unitRecalculateEffectiveStats(result);
}

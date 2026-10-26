/* NON_MATCHING: only the optional third parent's saturating count increment swaps the index/value registers (r2/r1 instead of r1/r2). */
#include "common.h"

struct UnitInheritanceRecord {
    u8 unk00[0x46];
    u16 id; // 0x46
    u8 unk48[4];
    u8 traits[64]; // 0x4c
    u8 ancestors[0x500]; // 0x8c
};
struct DevilInheritanceDefinition {
    u8 unk00[0x38];
    u16 skill; // 0x38
};
extern "C" DevilInheritanceDefinition *devilGetRecord(u16 id);
extern "C" void bitsetSetBit(UnitInheritanceRecord *record, u16 skill);
extern "C" void unitRecalculateEffectiveStats(UnitInheritanceRecord *record);

// Merge inherited traits and saturating ancestor counts, then rebuild the result's stats.
extern "C" void uniteMergeInheritedSkillsAndStats(void *, const UnitInheritanceRecord *first, const UnitInheritanceRecord *second, const UnitInheritanceRecord *third, UnitInheritanceRecord *result)
{
    bool hasThird = true;
    if (third == NULL)
        hasThird = false;
    if (hasThird) {
        for (s32 i = 0; i < 64; ++i) {
            result->traits[i] = first->traits[i];
            result->traits[i] |= second->traits[i];
            result->traits[i] |= third->traits[i];
        }
    } else {
        for (s32 i = 0; i < 64; ++i) {
            result->traits[i] = first->traits[i];
            result->traits[i] |= second->traits[i];
        }
    }
    bitsetSetBit(result, devilGetRecord(result->id)->skill);
    if (hasThird) {
        for (s32 i = 0; i < 0x500; ++i) {
            s32 total = first->ancestors[i] + second->ancestors[i];
            total += third->ancestors[i];
            if (total > 255)
                total = 255;
            result->ancestors[i] = total;
        }
    } else {
        for (s32 i = 0; i < 0x500; ++i) {
            s32 total = first->ancestors[i] + second->ancestors[i];
            if (total > 255)
                total = 255;
            result->ancestors[i] = total;
        }
    }
    if (result->ancestors[first->id] < 255)
        ++result->ancestors[first->id];
    if (result->ancestors[second->id] < 255)
        ++result->ancestors[second->id];
    if (hasThird && result->ancestors[third->id] < 255)
        ++result->ancestors[third->id];
    unitRecalculateEffectiveStats(result);
}

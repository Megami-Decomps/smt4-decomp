#include "common.h"

struct CategorizedRecord {
    u8 unk00[0x38];
    u32 flags : 16; // 0x38, bits 0..15
    u32 category : 4; // 0x38, bits 16..19
    u32 unkCategory : 12; // 0x38, bits 20..31
};

extern "C" {
CategorizedRecord *passiveSkillLookupRecord(u32 id);

// Sort category-six records ahead of the other records.
s32 recordCompareCategorySixFirst(const u16 *left, const u16 *right)
{
    CategorizedRecord *first = passiveSkillLookupRecord(*left);
    CategorizedRecord *second = passiveSkillLookupRecord(*right);
    s32 firstRank = 1;
    s32 secondRank = 1;
    if (first->category == 6) {
        firstRank = 2;
    }
    if (second->category == 6) {
        secondRank = 2;
    }
    return secondRank - firstRank;
}
}

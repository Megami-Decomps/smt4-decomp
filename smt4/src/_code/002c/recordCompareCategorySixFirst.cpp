#include "common.h"
#include "shard/PassiveSkill.h"

extern "C" {
// Sort category-six records ahead of the other records.
s32 recordCompareCategorySixFirst(const u16 *left, const u16 *right)
{
    const PassiveSkillRecord *first = passiveSkillLookupRecord(*left);
    const PassiveSkillRecord *second = passiveSkillLookupRecord(*right);
    s32 firstRank = 1;
    s32 secondRank = 1;
    if (((first->affinity >> 16) & 0xF) == 6) {
        firstRank = 2;
    }
    if (((second->affinity >> 16) & 0xF) == 6) {
        secondRank = 2;
    }
    return secondRank - firstRank;
}
}

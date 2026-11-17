/* NON_MATCHING: only the two key addresses swap callee-saved registers (retail keeps &firstKey in r5 and &secondKey in r6). */
#include "common.h"
#include "shard/PassiveSkill.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 idIsAbove400(u32 id);
s32 itemSortCompareRankThenKey(SkillListEntry *first, SkillListEntry *second);

/* Orders skills by ascending sort key, then by their unit's key, then by the final tie-break. */
static __inline s32 skillSortCompare(SkillListEntry &a, SkillListEntry &b)
{
    u16 skillA;
    u16 skillB;
    if (idIsAbove400(a.skillId) != 0) {
        skillA = passiveSkillLookupRecord(a.skillId)->sortKey;
    } else {
        skillA = skillDataFindById(a.skillId)->sort.sortKey;
    }
    if (idIsAbove400(b.skillId) != 0) {
        skillB = passiveSkillLookupRecord(b.skillId)->sortKey;
    } else {
        skillB = skillDataFindById(b.skillId)->sort.sortKey;
    }
    s32 difference = skillA - skillB;
    if (difference != 0) {
        return difference;
    }
    u16 unitA;
    u16 unitB;
    if (a.unit < 0) {
        unitA = 0;
    } else {
        unitA = gameGetUnitRecord(a.unit)->id;
    }
    if (b.unit < 0) {
        unitB = 0;
    } else {
        unitB = gameGetUnitRecord(b.unit)->id;
    }
    difference = unitA - unitB;
    if (difference != 0) {
        return difference;
    }
    return itemSortCompareRankThenKey(&a, &b);
}

/* Compares two skills for sorting: by their sort keys, then by their unit's key, then by the final tie-break. */
s32 FUN_002dc634(const u16 *first, const u16 *second)
{
    Table8Type5Record *firstOwner = table8Type5FindById(*first);
    Table8Type5Record *secondOwner = table8Type5FindById(*second);
    SkillListEntry firstKey;
    SkillListEntry secondKey;
    firstKey.skillId = firstOwner->value;
    firstKey.unit = 0;
    secondKey.skillId = secondOwner->value;
    secondKey.unit = 0;
    return skillSortCompare(firstKey, secondKey);
}
}

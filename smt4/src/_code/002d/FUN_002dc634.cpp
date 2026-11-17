/* NON_MATCHING: only the two key addresses swap callee-saved registers (retail keeps &firstKey in r5 and &secondKey in r6). */
#include "common.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/UnitRecordAccess.h"

struct PassiveSkillRecord {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u16 sortKey;
};

struct SkillRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 sortKey;
};


/* A skill and the unit slot it belongs to (negative: none). */
struct SkillSortKey {
    u32 skillId;
    s32 unit;
};

extern "C" {
s32 idIsAbove400(u32 id);
PassiveSkillRecord *passiveSkillLookupRecord(u32 id);
s32 itemSortCompareRankThenKey(SkillSortKey *first, SkillSortKey *second);

/* Orders skills by ascending sort key, then by their unit's key, then by the final tie-break. */
static __inline s32 skillSortCompare(SkillSortKey &a, SkillSortKey &b)
{
    u16 skillA;
    u16 skillB;
    if (idIsAbove400(a.skillId) != 0) {
        skillA = passiveSkillLookupRecord(a.skillId)->sortKey;
    } else {
        skillA = reinterpret_cast<SkillRecord *>(skillDataFindById(a.skillId))->sortKey;
    }
    if (idIsAbove400(b.skillId) != 0) {
        skillB = passiveSkillLookupRecord(b.skillId)->sortKey;
    } else {
        skillB = reinterpret_cast<SkillRecord *>(skillDataFindById(b.skillId))->sortKey;
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
    SkillSortKey firstKey;
    SkillSortKey secondKey;
    firstKey.skillId = firstOwner->value;
    firstKey.unit = 0;
    secondKey.skillId = secondOwner->value;
    secondKey.unit = 0;
    return skillSortCompare(firstKey, secondKey);
}
}

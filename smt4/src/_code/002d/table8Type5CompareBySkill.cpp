#include "common.h"
#include "shard/PassiveSkill.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 idIsAbove400(u32 id);
s32 itemSortCompareRankThenKey(const SkillListEntry *first, const SkillListEntry *second);

/* The skill's sort key: passive skills (ids above 400) and active skills keep it in their records. */
static u16 skillSortKey(const SkillListEntry *entry)
{
    if (idIsAbove400(entry->skillId)) {
        return passiveSkillLookupRecord(entry->skillId)->sortKey;
    }
    return skillDataFindById(entry->skillId)->sort.sortKey;
}

/* Tie-break by the holding units' sort keys (0 without a unit), then itemSortCompareRankThenKey (FUN_00219208's body). */
static __inline s32 compareUnitSortKeys(const SkillListEntry *a, const SkillListEntry *b)
{
    u16 keyA;
    u16 keyB;
    s32 diff;

    if (a->unit < 0) {
        keyA = 0;
    } else {
        keyA = gameGetUnitRecord(a->unit)->id;
    }
    if (b->unit < 0) {
        keyB = 0;
    } else {
        keyB = gameGetUnitRecord(b->unit)->id;
    }
    diff = keyA - keyB;
    if (diff != 0) {
        return diff;
    }
    return itemSortCompareRankThenKey(a, b);
}

/* skillListCompareBySortKeyAndUnit's body, inlined here: by skill sort key, then by unit sort key,
 * then itemSortCompareRankThenKey. */
static __inline s32 skillCompareBySortKeyAndUnit(const SkillListEntry *a, const SkillListEntry *b)
{
    s32 diff = skillSortKey(a) - skillSortKey(b);
    if (diff != 0) {
        return diff;
    }
    return compareUnitSortKeys(a, b);
}

/* Compares two type-5 table-8 entries for sorting by the skills they refer to (no holding unit). */
s32 table8Type5CompareBySkill(const u16 *first, const u16 *second)
{
    Table8Type5Record *firstOwner = table8Type5FindById(*first);
    Table8Type5Record *secondOwner = table8Type5FindById(*second);
    SkillListEntry firstKey;
    SkillListEntry secondKey;
    firstKey.skillId = firstOwner->value;
    firstKey.unit = 0;
    secondKey.skillId = secondOwner->value;
    secondKey.unit = 0;
    return skillCompareBySortKeyAndUnit(&firstKey, &secondKey);
}
}

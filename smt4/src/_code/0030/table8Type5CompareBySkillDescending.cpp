#include "shard/PassiveSkill.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {
s32 idIsAbove400(u32 id);
s32 itemSortCompareByCategoryAndId(const SkillListEntry *left, const SkillListEntry *right);

/* Returns the sort key of an item's skill, read from the passive table for ids above 400. */
static __inline u16 skillSortKey(const SkillListEntry *item)
{
    if (idIsAbove400(item->skillId)) {
        return passiveSkillLookupRecord(item->skillId)->sortKey;
    }
    return skillDataFindById(item->skillId)->sort.sortKey;
}

/* Tie-break by descending unit sort key (0 without a unit), then itemSortCompareByCategoryAndId. */
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
    diff = keyB - keyA;
    if (diff != 0) {
        return diff;
    }
    return itemSortCompareByCategoryAndId(a, b);
}

/* skillListCompareBySortKeyDescending's body, inlined here: descending skill key, then descending unit key, then itemSortCompareByCategoryAndId. */
static __inline s32 skillCompareDescending(const SkillListEntry *a, const SkillListEntry *b)
{
    u16 keyA = skillSortKey(a);
    u16 keyB = skillSortKey(b);
    s32 diff = keyB - keyA;
    if (diff != 0) {
        return diff;
    }
    return compareUnitSortKeys(a, b);
}

/* Sort compare of two type-5 table-8 entries by the skills they refer to (no holding unit). */
s32 table8Type5CompareBySkillDescending(const u16 *first, const u16 *second)
{
    Table8Type5Record *firstOwner = table8Type5FindById(*first);
    Table8Type5Record *secondOwner = table8Type5FindById(*second);
    SkillListEntry firstKey;
    SkillListEntry secondKey;
    firstKey.skillId = firstOwner->value;
    firstKey.unit = 0;
    secondKey.skillId = secondOwner->value;
    secondKey.unit = 0;
    return skillCompareDescending(&firstKey, &secondKey);
}
}

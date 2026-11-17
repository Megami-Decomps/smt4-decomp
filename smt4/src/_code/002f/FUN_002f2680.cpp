#include "common.h"
#include "shard/PassiveSkill.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

s32 idIsAbove400(s32 id);
s32 itemSortCompareByCategoryAndId(SkillListEntry *a, SkillListEntry *b);

/* Returns the sort key of an item's skill, read from the passive table for ids above 400. */
static __inline u16 skillSortKey(const SkillListEntry *item)
{
    if (idIsAbove400(item->skillId)) {
        return passiveSkillLookupRecord(item->skillId)->sortKey;
    }
    return skillDataFindById(item->skillId)->sort.sortKey;
}

/* Tie-break by descending unit sort key (0 without a unit), then itemSortCompareByCategoryAndId. */
static __inline s32 compareUnitSortKeys(SkillListEntry *a, SkillListEntry *b)
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

/* Sort comparator: orders two items by descending skill key, then descending unit key, then by
 * itemSortCompareByCategoryAndId. */
s32 FUN_002f2680(SkillListEntry *a, SkillListEntry *b)
{
    s32 keyA = skillSortKey(a);
    s32 diff = skillSortKey(b) - keyA;
    if (diff != 0) {
        return diff;
    }
    return compareUnitSortKeys(a, b);
}

} /* extern "C" */

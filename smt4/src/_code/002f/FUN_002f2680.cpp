#include "common.h"
#include "gamedata/DataTable40.h"
#include "gamedata/UnitRecordAccess.h"

struct SkillSortItem {
    /* 0x00 */ s32 skillId;
    /* 0x04 */ s32 unitId; /* negative when no unit */
};

struct PassiveSkillSortRecord {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u16 sortKey;
};

struct SkillSortRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 sortKey;
};


extern "C" {

s32 idIsAbove400(s32 id);
PassiveSkillSortRecord *passiveSkillLookupRecord(s32 id);
s32 itemSortCompareByCategoryAndId(SkillSortItem *a, SkillSortItem *b);

/* Returns the sort key of an item's skill, read from the passive table for ids above 400. */
static __inline u16 skillSortKey(const SkillSortItem *item)
{
    if (idIsAbove400(item->skillId)) {
        return passiveSkillLookupRecord(item->skillId)->sortKey;
    }
    return reinterpret_cast<SkillSortRecord *>(dataTable40FindById(item->skillId))->sortKey;
}

/* Tie-break by descending unit sort key (0 without a unit), then itemSortCompareByCategoryAndId. */
static __inline s32 compareUnitSortKeys(SkillSortItem *a, SkillSortItem *b)
{
    u16 keyA;
    u16 keyB;
    s32 diff;

    if (a->unitId < 0) {
        keyA = 0;
    } else {
        keyA = gameGetUnitRecord(a->unitId)->id;
    }
    if (b->unitId < 0) {
        keyB = 0;
    } else {
        keyB = gameGetUnitRecord(b->unitId)->id;
    }
    diff = keyB - keyA;
    if (diff != 0) {
        return diff;
    }
    return itemSortCompareByCategoryAndId(a, b);
}

/* Sort comparator: orders two items by descending skill key, then descending unit key, then by
 * itemSortCompareByCategoryAndId. */
s32 FUN_002f2680(SkillSortItem *a, SkillSortItem *b)
{
    s32 keyA = skillSortKey(a);
    s32 diff = skillSortKey(b) - keyA;
    if (diff != 0) {
        return diff;
    }
    return compareUnitSortKeys(a, b);
}

} /* extern "C" */

/* NON_MATCHING: register allocation in the unit-key comparison (retail moves `a` to r6 and keeps the key in r4). */
#include "common.h"
#include "gamedata/DataTable40.h"

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

struct UnitSortRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 sortKey;
};

extern "C" {

s32 idIsAbove400(s32 id);
PassiveSkillSortRecord *passiveSkillLookupRecord(s32 id);
UnitSortRecord *gameGetUnitRecord(s32 id);
s32 FUN_002497f8(SkillSortItem *a, SkillSortItem *b);

/* Returns the sort key of an item's skill, read from the passive table for ids above 400. */
static __inline u16 skillSortKey(const SkillSortItem *item)
{
    if (idIsAbove400(item->skillId)) {
        return passiveSkillLookupRecord(item->skillId)->sortKey;
    }
    return reinterpret_cast<SkillSortRecord *>(dataTable40FindById(item->skillId))->sortKey;
}

/* Returns the sort key of an item's unit, or 0 without one. */
static __inline u16 unitSortKey(const SkillSortItem *item)
{
    if (item->unitId < 0) {
        return 0;
    }
    return gameGetUnitRecord(item->unitId)->sortKey;
}

/* Sort comparator: orders two items by descending skill key, then descending unit key, then by
 * FUN_002497f8. */
s32 FUN_002f2680(SkillSortItem *a, SkillSortItem *b)
{
    s32 skillA = skillSortKey(a);
    s32 diff = skillSortKey(b) - skillA;
    s32 unitA;

    if (diff != 0) {
        return diff;
    }
    unitA = unitSortKey(a);
    diff = unitSortKey(b) - unitA;
    if (diff != 0) {
        return diff;
    }
    return FUN_002497f8(a, b);
}

} /* extern "C" */

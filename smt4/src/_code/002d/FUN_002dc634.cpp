/* NON_MATCHING: structure and calls match; armcc schedules the sort-key stores differently (retail stores each key's id and 0 separately and interleaves them with the second record load) and allocates r4/r6 differently */
#include "common.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/DataTable40.h"

struct PassiveSkillRecord {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u16 sortKey;
};

struct SkillRecord {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 sortKey;
};

struct UnitRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 sortKey;
};

/* A skill and the unit slot it belongs to (negative: none). */
struct SkillSortKey {
    u32 skillId;
    s32 unit;
};

extern "C" {
s32 idIsAbove400(u32 id);
PassiveSkillRecord *passiveSkillLookupRecord(u32 id);
UnitRecord *gameGetUnitRecord(s32 unit);
s32 FUN_00257568(SkillSortKey *first, SkillSortKey *second);

/* The skill's own sort key. */
static inline s32 skillSortValue(SkillSortKey *key)
{
    if (idIsAbove400(key->skillId) != 0) {
        return passiveSkillLookupRecord(key->skillId)->sortKey;
    }
    return reinterpret_cast<SkillRecord *>(dataTable40FindById(key->skillId))->sortKey;
}

/* The sort key of the unit the skill belongs to; 0 without one. */
static inline s32 unitSortValue(SkillSortKey *key)
{
    return key->unit < 0 ? 0 : gameGetUnitRecord(key->unit)->sortKey;
}

/* Compares two skills for sorting: by their sort keys, then by their unit's key, then by the final tie-break. */
s32 FUN_002dc634(const u16 *first, const u16 *second)
{
    Table8Type5Record *firstOwner = table8Type5FindById(*first);
    Table8Type5Record *secondOwner = table8Type5FindById(*second);
    SkillSortKey firstKey;
    SkillSortKey secondKey;
    SkillSortKey *a = &firstKey;
    SkillSortKey *b = &secondKey;
    a->skillId = firstOwner->value;
    a->unit = 0;
    b->skillId = secondOwner->value;
    b->unit = 0;

    s32 difference = skillSortValue(a) - skillSortValue(b);
    if (difference == 0) {
        difference = unitSortValue(a) - unitSortValue(b);
        if (difference == 0) {
            difference = FUN_00257568(a, b);
        }
    }
    return difference;
}
}

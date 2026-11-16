#include "shard/PassiveSkill.h"
#include "gamedata/DataTable40.h"

/* The unit record field the skill list sorts by. */
struct SkillSortUnitRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 sortKey;
};

extern "C" {

bool idIsAbove400(u32 id);
const SkillSortUnitRecord *gameGetUnitRecord(s32 unit);
s32 itemSortCompareRankThenKey(const SkillListEntry *a, const SkillListEntry *b);

/* The skill's sort key: passive skills (ids above 400) and active skills keep it in their records. */
static u16 skillSortKey(const SkillListEntry *entry)
{
    if (idIsAbove400(entry->skillId)) {
        return passiveSkillLookupRecord(entry->skillId)->sortKey;
    }
    return reinterpret_cast<const ActiveSkillRecord *>(dataTable40FindById(entry->skillId))->sortKey;
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
        keyA = gameGetUnitRecord(a->unit)->sortKey;
    }
    if (b->unit < 0) {
        keyB = 0;
    } else {
        keyB = gameGetUnitRecord(b->unit)->sortKey;
    }
    diff = keyA - keyB;
    if (diff != 0) {
        return diff;
    }
    return itemSortCompareRankThenKey(a, b);
}

/* Skill list sort comparator: by skill sort key, then by unit sort key, then itemSortCompareRankThenKey. */
s32 FUN_00219148(const SkillListEntry *a, const SkillListEntry *b)
{
    s32 diff = skillSortKey(a) - skillSortKey(b);
    if (diff != 0) {
        return diff;
    }
    return compareUnitSortKeys(a, b);
}

} /* extern "C" */

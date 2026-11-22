#include "gamedata/SkillDataRecord.h"
#include "gamedata/ReferencedKindRecord.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

struct SkillSlotEntry {
    u32 skillId;
    s32 unit;
};

s32 itemSortCompareRankThenKey(const SkillSlotEntry *a, const SkillSlotEntry *b);

/* The skill's sort key: passive skills (ids above 400) and active skills keep it in their records. */
static u16 skillSortKey(const SkillSlotEntry *entry)
{
    if (idIsAbove400(entry->skillId)) {
        return dataTable41FindById(entry->skillId)->stats.level;
    }
    return skillDataFindById(entry->skillId)->sort.sortKey;
}

/* Tie-break by the holding units' demon ids (0 without a unit), then itemSortCompareRankThenKey. */
static __inline s32 compareUnitSortKeys(const SkillSlotEntry *a, const SkillSlotEntry *b)
{
    u16 keyA;
    u16 keyB;
    s32 diff;

    if (a->unit < 0) {
        keyA = 0;
    } else {
        keyA = gameGetSlotRecord(a->unit)->id;
    }
    if (b->unit < 0) {
        keyB = 0;
    } else {
        keyB = gameGetSlotRecord(b->unit)->id;
    }
    diff = keyA - keyB;
    if (diff != 0) {
        return diff;
    }
    return itemSortCompareRankThenKey(a, b);
}

/* Skill list sort comparator: by skill sort key, then by unit demon id, then itemSortCompareRankThenKey. */
s32 skillListCompareBySortKeyAndUnit(const SkillSlotEntry *a, const SkillSlotEntry *b)
{
    s32 diff = skillSortKey(a) - skillSortKey(b);
    if (diff != 0) {
        return diff;
    }
    return compareUnitSortKeys(a, b);
}

} /* extern "C" */

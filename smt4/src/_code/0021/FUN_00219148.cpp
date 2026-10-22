/* NON_MATCHING: in the unit-key compare retail copies `a` to r6 and computes a's unit key in r4; built keeps `a` in r4 and the key in r6. */
#include "shard/PassiveSkill.h"

/* The unit record field the skill list sorts by. */
struct SkillSortUnitRecord {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 sortKey;
};

extern "C" {

bool idIsAbove400(u32 id);
const ActiveSkillRecord *FUN_002ae164(u32 id);
const SkillSortUnitRecord *gameGetUnitRecord(s32 unit);
s32 FUN_00257568(const SkillListEntry *a, const SkillListEntry *b);

/* The skill's sort key: passive skills (ids above 400) and active skills keep it in their records. */
static u16 skillSortKey(const SkillListEntry *entry)
{
    if (idIsAbove400(entry->skillId)) {
        return passiveSkillLookupRecord(entry->skillId)->sortKey;
    }
    return FUN_002ae164(entry->skillId)->sortKey;
}

/* The holding unit's sort key, 0 without a unit. */
static u16 skillUnitSortKey(const SkillListEntry *entry)
{
    if (entry->unit < 0) {
        return 0;
    }
    return gameGetUnitRecord(entry->unit)->sortKey;
}

/* Skill list sort comparator: by skill sort key, then by unit sort key, then FUN_00257568. */
s32 FUN_00219148(const SkillListEntry *a, const SkillListEntry *b)
{
    s32 diff = skillSortKey(a) - skillSortKey(b);
    if (diff != 0) {
        return diff;
    }
    diff = skillUnitSortKey(a) - skillUnitSortKey(b);
    if (diff != 0) {
        return diff;
    }
    return FUN_00257568(a, b);
}

} /* extern "C" */

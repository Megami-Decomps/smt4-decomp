/* NON_MATCHING: skill-list temporary construction and the two saved stack-address registers differ from retail. */
#include "shard/PassiveSkill.h"
#include "gamedata/UnitStats.h"
#include "gamedata/Table8Type5Lookup.h"
#include "gamedata/DataTable40.h"

extern "C" {
const StatBlock *gameGetUnitRecord(s32 unit);
s32 idIsAbove400(u32 id);
s32 FUN_002497f8(const SkillListEntry *left, const SkillListEntry *right);
}

/* Orders skills by descending sort key, then by descending holder id, then by FUN_002497f8. */
static __inline s32 skillComparePriorityAndHolder(const SkillListEntry &left, const SkillListEntry &right)
{
    u16 leftPriority;
    u16 rightPriority;
    if (idIsAbove400(left.skillId)) {
        leftPriority = passiveSkillLookupRecord(left.skillId)->sortKey;
    } else {
        leftPriority = reinterpret_cast<const ActiveSkillRecord *>(dataTable40FindById(left.skillId))->sortKey;
    }
    if (idIsAbove400(right.skillId)) {
        rightPriority = passiveSkillLookupRecord(right.skillId)->sortKey;
    } else {
        rightPriority = reinterpret_cast<const ActiveSkillRecord *>(dataTable40FindById(right.skillId))->sortKey;
    }
    s32 result = rightPriority - leftPriority;
    if (result != 0) {
        return result;
    }
    u16 leftHolder;
    u16 rightHolder;
    if (left.unit < 0) {
        leftHolder = 0;
    } else {
        leftHolder = gameGetUnitRecord(left.unit)->id;
    }
    if (right.unit < 0) {
        rightHolder = 0;
    } else {
        rightHolder = gameGetUnitRecord(right.unit)->id;
    }
    result = rightHolder - leftHolder;
    if (result != 0) {
        return result;
    }
    return FUN_002497f8(&left, &right);
}

/* Sort compare of two type-5 table-8 entries by the skills they refer to. */
extern "C" s32 FUN_0030bd88(const u16 *first, const u16 *second)
{
    const Table8Type5Record *firstSource = table8Type5FindById(*first);
    const Table8Type5Record *secondSource = table8Type5FindById(*second);
    SkillListEntry left;
    SkillListEntry right;
    left.skillId = firstSource->value;
    left.unit = 0;
    right.skillId = secondSource->value;
    right.unit = 0;
    return skillComparePriorityAndHolder(left, right);
}

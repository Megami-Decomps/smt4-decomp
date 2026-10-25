/* NON_MATCHING: skill-list temporary construction and the two saved stack-address registers differ from retail. */
#include "shard/PassiveSkill.h"
#include "gamedata/UnitStats.h"
#include "gamedata/Table8Type5Lookup.h"

extern "C" {
const ActiveSkillRecord *dataTable40FindById(u32 skillId);
const StatBlock *gameGetUnitRecord(s32 unit);
s32 idIsAbove400(u32 id);
s32 FUN_002497f8(const SkillListEntry *left, const SkillListEntry *right);
}

static inline s32 skillComparePriorityAndHolder(const SkillListEntry *left, const SkillListEntry *right)
{
    u16 leftPriority = idIsAbove400(left->skillId) ?
        passiveSkillLookupRecord(left->skillId)->sortKey : dataTable40FindById(left->skillId)->sortKey;
    u16 rightPriority = idIsAbove400(right->skillId) ?
        passiveSkillLookupRecord(right->skillId)->sortKey : dataTable40FindById(right->skillId)->sortKey;
    s32 result = rightPriority - leftPriority;
    if (!result) {
        u16 leftHolder = left->unit < 0 ? 0 : gameGetUnitRecord(left->unit)->id;
        u16 rightHolder = right->unit < 0 ? 0 : gameGetUnitRecord(right->unit)->id;
        result = rightHolder - leftHolder;
        if (!result) {
            result = FUN_002497f8(left, right);
        }
    }
    return result;
}

extern "C" s32 FUN_0030bd88(const u16 *first, const u16 *second)
{
    const Table8Type5Record *firstSource = table8Type5FindById(*first);
    const Table8Type5Record *secondSource = table8Type5FindById(*second);
    SkillListEntry left = {firstSource->value, 0};
    SkillListEntry right = {secondSource->value, 0};
    return skillComparePriorityAndHolder(&left, &right);
}

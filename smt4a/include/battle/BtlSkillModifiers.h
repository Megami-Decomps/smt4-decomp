/* Skill modifier queries of the battle code (Apocalypse). */
#ifndef SMT4A_BATTLE_BTLSKILLMODIFIERS_H
#define SMT4A_BATTLE_BTLSKILLMODIFIERS_H

#include "common.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmBaseRecordA.h"

/* btlDemonSkillCategoryModifier's body, which the skill response queries inline: demon `id`'s modifier for the
 * skill's category, 0 without a skill, for a category past the table or for a missing record. */
static __inline s32 demonCategoryModifier(u32 id, const SkillDataRecordA *skill)
{
    if (skill == NULL || skill->sort.rankCategory >= 18)
        return 0;
    u32 index = skill->sort.rankCategory;
    const NkmBaseRecordA *record = nkmBaseGetRecord((u16)id);
    if (record == NULL)
        return 0;
    return record->categoryModifiers[index];
}

#endif

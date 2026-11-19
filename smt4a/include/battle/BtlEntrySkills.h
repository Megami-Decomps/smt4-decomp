/* Skill queries over a battle entry's skill sources (Apocalypse): its two equipped skill lists and,
 * for a demon, its enemy record's innate list. */
#ifndef SMT4A_BATTLE_BTLENTRYSKILLS_H
#define SMT4A_BATTLE_BTLENTRYSKILLS_H

#include "common.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* Whether any of the unit's skill sources lists a category-three skill. */
u32 btlEntryHasCategoryThreeSkill(BtlCombatantEntryA *unit);

}

/* btlEntryHasCategoryThreeSkill's body, which its script-query callers have inline
 * (FUN_0038c888, scrBtlEntryHasCategoryThreeSkill). */
static inline u32 unitHasCategoryThreeSkill(BtlCombatantEntryA *unit)
{
    if (unit->data.record != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(unit->data.record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->data.secondaryRecord != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(unit->data.secondaryRecord->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->data.candidate != NULL) {
        NkmEnemyRecordA *record = nkmEnemyFindById(unit->data.id);
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    return 0;
}

#endif

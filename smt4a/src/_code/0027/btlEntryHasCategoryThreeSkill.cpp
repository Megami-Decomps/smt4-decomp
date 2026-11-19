/* Checks all available unit skill sources for a category-three skill. */
#include "battle/BtlEntrySkills.h"

extern "C" {

u32 btlEntryHasCategoryThreeSkill(BtlCombatantEntryA *unit)
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
}

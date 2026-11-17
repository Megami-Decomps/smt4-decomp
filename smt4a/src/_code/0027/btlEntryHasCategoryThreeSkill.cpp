/* Checks all available unit skill sources for a category-three skill. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

u32 btlEntryHasCategoryThreeSkill(BtlCombatantEntryA *unit)
{
    if (unit->record != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(unit->record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->secondaryRecord != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            SkillDataRecordA *skill = skillDataFindById(unit->secondaryRecord->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->candidate.record != NULL) {
        NkmEnemyRecordA *record = nkmEnemyFindById(unit->id);
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

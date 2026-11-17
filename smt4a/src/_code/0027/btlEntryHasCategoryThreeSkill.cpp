/* Checks all available unit skill sources for a category-three skill. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/Table00.h"
#include "gamedata/Table04Record.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

u32 btlEntryHasCategoryThreeSkill(BtlCombatantEntryA *unit)
{
    if (unit->record != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            Table04RecordA *skill = dataTable04FindById(unit->record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->secondaryRecord != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            Table04RecordA *skill = dataTable04FindById(unit->secondaryRecord->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->candidate.record != NULL) {
        Table00RecordA *record = dataTable00FindById(unit->id);
        for (s32 i = 0; i < 8; ++i) {
            Table04RecordA *skill = dataTable04FindById(record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    return 0;
}
}

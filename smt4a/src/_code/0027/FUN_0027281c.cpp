/* Checks all available unit skill sources for a category-three skill. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/Table00.h"
#include "gamedata/Table04Record.h"

extern "C" {
Table00Record *dataTable00FindById(u32 id);
Table04Record *dataTable04FindById(u32 id);

u32 FUN_0027281c(BtlCombatantEntryA *unit)
{
    if (unit->record != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            Table04Record *skill = dataTable04FindById(unit->record->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->secondaryRecord != NULL) {
        for (s32 i = 0; i < 8; ++i) {
            Table04Record *skill = dataTable04FindById(unit->secondaryRecord->skills[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    if (unit->candidate.record != NULL) {
        Table00Record *record = dataTable00FindById(unit->id);
        for (s32 i = 0; i < 8; ++i) {
            Table04Record *skill = dataTable04FindById(record->skillList.ids[i]);
            if (skill != NULL && skill->sort.category == 3) {
                return 1;
            }
        }
    }
    return 0;
}
}

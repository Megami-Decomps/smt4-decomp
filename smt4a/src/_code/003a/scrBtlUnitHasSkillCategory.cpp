#include "battle/btlUnit.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/SkillDataRecord.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnit.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/BtlGlobals.h"

extern "C" {
void scrSetResult(u32);
extern u32 g_btlScriptUnit;
u32 scrGetArg(u32);

/* Whether any of the unit's skill sources lists a skill of the given category
 * (btlEntryHasCategoryThreeSkill's walk with the category as an argument; the smt4 twin FUN_00311fc4 has it too). */
static __inline u32 entryHasSkillCategory(BtlCombatantEntryA *entry, u32 category)
{
    s32 index;
    const SkillDataRecordA *skill;
    const NkmEnemyRecordA *demon;

    if (entry->data.record) {
        for (index = 0; index < 8; ++index) {
            skill = skillDataFindById(entry->data.record->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                return 1;
            }
        }
    }
    if (entry->data.secondaryRecord) {
        for (index = 0; index < 8; ++index) {
            skill = skillDataFindById(entry->data.secondaryRecord->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                return 1;
            }
        }
    }
    if (entry->data.candidate) {
        demon = nkmEnemyFindById(entry->data.id);
        for (index = 0; index < 8; ++index) {
            skill = skillDataFindById(demon->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                return 1;
            }
        }
    }
    return 0;
}

// Script query: whether the script unit has a skill of the category argument 0 names.
u32 scrBtlUnitHasSkillCategory(void)
{
    u32 category = scrGetArg(0);
    BtlCombatantEntryA *entry = reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->entry;
    if (entryHasSkillCategory(entry, category)) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}

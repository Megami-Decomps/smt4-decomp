/* NON_MATCHING: category bit extraction matches; final skill-list success path duplicates rather than sharing the result-setting tail. */
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

// Check both persistent skill lists and the demon's innate list for the requested category.
u32 FUN_003a8790(void)
{
    u32 category = scrGetArg(0);
    BtlCombatantEntryA *entry = reinterpret_cast<BtlUnitA *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)))->entry;
    if (entry->record) {
        for (s32 index = 0; index < 8; ++index) {
            const SkillDataRecordA *skill = skillDataFindById(entry->record->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (entry->secondaryRecord) {
        for (s32 index = 0; index < 8; ++index) {
            const SkillDataRecordA *skill = skillDataFindById(entry->secondaryRecord->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (entry->candidate.record) {
        const NkmEnemyRecordA *demon = nkmEnemyFindById(entry->id);
        for (s32 index = 0; index < 8; ++index) {
            const SkillDataRecordA *skill = skillDataFindById(demon->skills[index]);
            if (skill && category == ((skill->properties >> 11) & 0x1f)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}

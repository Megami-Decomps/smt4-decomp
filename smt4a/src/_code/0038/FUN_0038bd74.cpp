/* NON_MATCHING: eligibility mask registers and cached combatant-id address differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/SkillDataRecord.h"
extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);

u32 FUN_0038bd74(void)
{
    u32 id = scrGetArg(0);
    for (s32 slot = 0; slot < 109; ++slot) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[slot];
                if ((g_btlCandidateMasks.unavailable & entry->flags) && (g_btlCandidateMasks.required & entry->flags) &&
                !(g_btlCandidateMasks.excluded & entry->flags) && entry->data.id == id) {
            if (entry->data.record) {
                for (s32 i = 0; i < 8; ++i) {
                    SkillDataRecordA *skill = skillDataFindById(entry->data.record->skills[i]);
                    if (skill && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->data.secondaryRecord) {
                for (s32 i = 0; i < 8; ++i) {
                    SkillDataRecordA *skill = skillDataFindById(entry->data.secondaryRecord->skills[i]);
                    if (skill && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->data.candidate) {
                NkmEnemyRecordA *record = nkmEnemyFindById(entry->data.id);
                for (s32 i = 0; i < 8; ++i) {
                    SkillDataRecordA *skill = skillDataFindById(record->skills[i]);
                    if (skill && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
        }
    }
    scrSetResult(0);
    return 1;
}
}

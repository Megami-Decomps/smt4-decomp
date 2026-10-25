/* NON_MATCHING: eligibility mask registers and cached combatant-id address differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/Table00.h"
#include "gamedata/Table00Lookup.h"
#include "gamedata/Table04Record.h"
extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(s32 result);

u32 FUN_0038bd74(void)
{
    u32 id = scrGetArg(0);
    for (s32 slot = 0; slot < 109; ++slot) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[slot];
        u64 flags = entry->flags;
        if ((flags & g_btlCandidateMasks.unavailable) && (flags & g_btlCandidateMasks.required) &&
                !(flags & g_btlCandidateMasks.excluded) && entry->id == id) {
            if (entry->record) {
                for (s32 i = 0; i < 8; ++i) {
                    Table04Record *skill = dataTable04FindById(entry->record->skills[i]);
                    if (skill && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->secondaryRecord) {
                for (s32 i = 0; i < 8; ++i) {
                    Table04Record *skill = dataTable04FindById(entry->secondaryRecord->skills[i]);
                    if (skill && skill->sort.category == 3) {
                        scrSetResult(1);
                        return 1;
                    }
                }
            }
            if (entry->candidate.record) {
                Table00Record *record = dataTable00FindById(entry->id);
                for (s32 i = 0; i < 8; ++i) {
                    Table04Record *skill = dataTable04FindById(record->skillList.ids[i]);
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

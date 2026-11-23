/* NON_MATCHING: only the excluded-mask test allocates its AND registers differently. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryA.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/SkillDataLookup.h"
#include "script/ScriptArgs.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

/* Removes listed members whose skill record selects a slot of the requested group. */
u32 FUN_003b14b8(void)
{
    s32 enabled = scrGetArg(0);
    s32 group = scrGetArg(1);
    BtlMainStateExtA *state = btlGetMainStateExt();
    if (enabled != 0 && !state->members.empty()) {
        for (s32 i = 0; i < 109; i++) {
            BtlCombatantEntryA *record = &btlGetMainState()->entries[i];
            u64 mask = record->flags;
            if ((g_btlCandidateMasks.unavailable & mask) != 0 &&
                (g_btlCandidateMasks.required & mask) != 0 &&
                (g_btlCandidateMasks.excluded & mask) == 0) {
                for (s32 slot = 0; slot < 21; slot++) {
                    if (group == record->data.values[slot] >> 10) {
                        for (std::vector<u16>::iterator id = state->members.begin(); id != state->members.end();) {
                            SkillDataRecordA *entry = skillDataFindById(itemTableGetItemRecord(*id)->skillId);
                            if (entry != NULL && ((entry->properties >> 11) & 0x1f) == (u32)slot) {
                                id = state->members.erase(id);
                            } else {
                                ++id;
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */

/* NON_MATCHING: saved-zero register and final 64-bit state-update scheduling differ. */
#include "battle/btlMain.h"
#include "shard/W5_W5Match7_ScriptUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "code/Code0019.h"
#include "battle/BtlGlobals.h"

extern "C" {
u32 hasFlag80Or1000(u32 unit, u32 *flags);
s32 btlFindSelectionIndexByOrdinal(const BtlMainStateA *battle, s32 ordinal);
bool FUN_0047f78c();
BtlCombatantEntryA *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlMainStateA *battle);
void FUN_003f1b3c(BtlMainStateA *battle, u32 category, s32 kind, u32 *entry, u32 *sound);
u32 FUN_0047f4cc(u32 sound, f32 volume, f32 gain, f32 pitch);

// Make at most one random voice attempt for a qualifying special combatant.
void FUN_003eed44(BtlMainStateA *battle)
{
    if (battle->voiceGate.blocked == 0 && battle->encounterGate.disabled == 0) {
        ScriptUnit *unit = reinterpret_cast<ScriptUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if ((unit == NULL || !hasFlag80Or1000(g_btlScriptUnit, reinterpret_cast<u32 *>(unit))) &&
            btlFindSelectionIndexByOrdinal(battle, 1) < 0) {
            if ((battle->stateFlags64.bits & g_btlMain.voiceBlocking.blocked) == 0 &&
                (battle->stateFlags64.bits & g_btlMain.voiceState.attempted) == 0) {
                if (FUN_0047f78c()) {
                    BtlCombatantEntryA *entry = btlFindFirstEntryMatchingCategoryAndRequiredMask(battle);
                    battle->specialEffect = 0;
                    if (entry != NULL) {
                        const ScriptEntryInfo *record = reinterpret_cast<const ScriptEntryInfo *>(entry->data.specialRecord);
                        u32 category = FUN_0019acdc(record->id, 1);
                        u32 selectedEntry;
                        u32 sound;
                        FUN_003f1b3c(battle, category, 1, &selectedEntry, &sound);
                        battle->specialEffect = FUN_0047f4cc(sound, 1.0f, 0.707f, 0.707f);
                    }
                }
                battle->stateFlags64.bits |= g_btlMain.voiceState.attempted;
            }
        }
    }
}
}

/* NON_MATCHING: register allocation of the mask AND/ORR chain differs; u64 mask loads pair differently (ldm versus two ldr) (the active-entry byte already folds with the s8 flag). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/BattleUnitSkills.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "util/RecordGetScaledMaximum.h"

extern "C" {
BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *battle);
void scrSetResult(s32 value);

/* Report an eligible combatant whose maximum HP does not exceed its source maximum. */
u32 FUN_0038c45c(void)
{
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        u64 flags = entry->flags;
        if ((g_btlCandidateMasks.unavailable & flags) == 0 &&
            (flags & g_btlCandidateMasks.required) != 0 &&
            (g_btlCandidateMasks.excluded & flags) == 0) {
            if ((flags & g_btlCandidateMasks.maximumSource.direct) != 0) {
                if (entry->maxHp <= entry->record->maximum.maxHp) {
                    scrSetResult(1);
                    return 1;
                }
            } else if ((flags & g_btlCandidateMasks.maximumSource.scaled) != 0 &&
                       entry->maxHp <= recordGetScaledMaximum(entry->secondaryRecord)) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        BtlCombatantEntryA *entry = FUN_003eaf20(btlGetMainState());
        if (entry != NULL && entry->maxHp <= recordGetScaledMaximum(entry->specialMaximum.record)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}
}

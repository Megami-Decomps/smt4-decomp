#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "ui/UiControl.h"
#include "battle/BtlGlobals.h"

extern "C" {
void dialogClose(s32 mode);
void btlHelpFreeEntries(void);
void FUN_00272584(BtlMainStateA *state, BtlUnit *unit, s32 mode, s32 subject);

/* Chooses an eligible combatant or selected roster subject before replacing the interaction help. */
void FUN_004ecd7c(BtlMainStateA **owner, BtlUnit *unit)
{
    BtlMainStateA *state = *owner;
    s32 subject = -1;
    s32 index = 0; /* shared by both searches */

    if ((state->stateFlags64.bits & g_btlAction.helpModeMask) != 0) {
        for (; index < 109; ++index) {
            BtlCombatantEntryA *entry = &state->entries[index];
            if ((entry->flags & g_btlAction.targetableMask) != 0 &&
                (entry->flags & g_btlAction.interaction.excludedMask) == 0 &&
                entry->ids[0] >= 0 &&
                (entry->flags & g_btlAction.interaction.requiredMask) != 0) {
                subject = entry->ids[0];
                break;
            }
        }
    } else {
        for (; index < 109; ++index) {
            s32 combatant = state->roster[index].combatant.combatantIndex;
            if (combatant >= 0 && unit->targets[combatant] != 0) {
                subject = state->roster[index].combatant.parameterIndex;
                break;
            }
        }
    }
    if (dialogIsActive() != 0) {
        dialogClose(1);
    }
    btlHelpFreeEntries();
    FUN_00272584(*owner, unit, 0, subject);
}
} /* extern "C" */

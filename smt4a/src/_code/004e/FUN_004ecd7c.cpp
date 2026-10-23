/* NON_MATCHING: Mode/entry mask loads, required-mask spill and roster subject address calculation differ. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"

/* This mode mask lies beyond the recovered BtlActionGlobals prefix. */
struct BattleHelpModeMaskView {
    u8 unk00[0xF8];
    u64 mask;
};
extern "C" {
extern BtlActionGlobals g_btlAction;
s32 dialogIsActive(void);
void dialogClose(s32 mode);
void btlHelpFreeEntries(void);
void FUN_00272584(BtlMainStateA *state, BtlUnit *unit, s32 mode, s32 subject);

/* Chooses an eligible combatant or selected roster subject before replacing the interaction help. */
void FUN_004ecd7c(BtlMainStateA **owner, BtlUnit *unit)
{
    BtlMainStateA *state = *owner;
    s32 subject = -1;
    u64 modeMask = ((BattleHelpModeMaskView *)&g_btlAction)->mask;
    if ((state->stateFlags64.bits & modeMask) != 0) {
        for (s32 index = 0; index < 109; ++index) {
            BtlCombatantEntryA *entry = &state->entries[index];
            u64 flags = entry->flags;
            if ((flags & g_btlAction.targetableMask) != 0 &&
                (flags & g_btlAction.interaction.excludedMask) == 0 &&
                entry->unitIndex >= 0 &&
                (flags & g_btlAction.interaction.requiredMask) != 0) {
                subject = entry->unitIndex;
                break;
            }
        }
    } else {
        for (s32 index = 0; index < 109; ++index) {
            BattleRosterRecordA *record = &state->roster[index];
            s32 combatant = record->combatant.combatantIndex;
            if (combatant >= 0 && unit->targets[combatant] != 0) {
                subject = record->combatant.parameterIndex;
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
}

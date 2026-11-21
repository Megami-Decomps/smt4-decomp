#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern BattleActionSelectionMaskPrefixA g_btlAction;

/* Clears the roster's action-mark flags, then marks the requested active combatant as a target. */
u32 btlClearActionMarksAndSelectTarget(BtlMainStateA **state, u8 *output, s32 selectionId)
{
    for (s32 i = 0; i < 109; ++i) {
        (*state)->roster[i].liveFlags.unk50 &= ~4u;
        (*state)->roster[i].liveFlags.unk50 &= ~8u;
    }

    for (s32 i = 0; i < 109; ++i) {
        const BtlCombatantEntryA *entry = &(*state)->entries[i];
        if ((entry->flags & g_btlAction.requiredAny) && !(entry->flags & g_btlAction.excluded) && entry->selectionIndex == selectionId) {
            output[0x38 + selectionId] = 1; /* the selection's target mark */
            return 1;
        }
    }
    return 0;
}
}

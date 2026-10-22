/* NON_MATCHING: Roster-status load/store scheduling and selection registers differ. */
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern BattleActionSelectionMaskPrefixA g_btlAction;

u32 FUN_004e7080(BtlMainStateA **state, u8 *output, s32 selectionId)
{
    for (s32 i = 0; i < 109; ++i) {
        u32 flags = (*state)->roster[i].liveFlags.unk50 & ~u32(4);
        (*state)->roster[i].liveFlags.unk50 = flags;
        flags &= ~u32(8);
        (*state)->roster[i].liveFlags.unk50 = flags;
    }

    const u64 requiredAny = g_btlAction.requiredAny;
    const u64 excluded = g_btlAction.excluded;
    const BtlCombatantEntryA *entries = (*state)->entries;

    for (s32 i = 0; i < 109; ++i) {
        const BtlCombatantEntryA &entry = entries[i];
        if ((entry.flags & requiredAny) != 0 &&
            (entry.flags & excluded) == 0 &&
            entry.indexView.selectionIndex == selectionId) {
            (output + selectionId)[0x38] = 1;
            return 1;
        }
    }
    return 0;
}
}

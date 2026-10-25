/* NON_MATCHING: corrected narrowing of the random limit and canonical unit getter contract; candidate/status/walker registers and targetable-mask load grouping still differ. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnitSlot.h"

extern "C" {
extern BattleActionState g_btlAction;
s16 FUN_004e9ae8(BtlMainStateA **context, s32 *candidates, s32 count, u32 mode);
u32 lcgRandomRange(s32 limit);

// Choose and mark one random action target among combatants with the requested status bit.
void FUN_004e5a90(BtlMainStateA **context, u32 status)
{
    s32 candidates[109];
    s32 count = 0;
    u32 statusBit = 1u << (u8)status;
    BtlCombatantEntryA *entry = (*context)->entries;
    for (s32 remaining = 109; remaining != 0; --remaining, ++entry) {
        if ((entry->flags & g_btlAction.targetable) && (entry->statusFlags & statusBit))
            candidates[count++] = entry->indexView.selectionIndex;
    }
    s16 eligibleCount = FUN_004e9ae8(context, candidates, count, 1);
    u32 selected = lcgRandomRange((u16)(eligibleCount - 1));
    btlUnitGet(context)->selection.targeted[candidates[selected]] = 1;
}
}

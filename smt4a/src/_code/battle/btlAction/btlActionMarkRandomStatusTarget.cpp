#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BattleUnitSlot.h"
#include "battle/BattleHelpers_Smt4a.h"

extern "C" {
extern u64 g_btlTargetableMask;
s16 FUN_004e9ae8(BtlMainStateA **context, s32 *candidates, s32 count, u32 mode);
u32 lcgRandomRange(s32 limit);

// Choose and mark one random action target among combatants with the requested status bit.
void btlActionMarkRandomStatusTarget(BtlMainStateA **context, u32 status)
{
    s32 candidates[109];
    s32 count = 0;
    BtlCombatantEntryA *entry = (*context)->entries;
    for (s32 remaining = 109; remaining != 0; --remaining, ++entry) {
        if ((entry->flags & g_btlTargetableMask) && (entry->statusFlags & (1u << status)))
            candidates[count++] = entry->indexView.selectionIndex;
    }
    s16 eligibleCount = FUN_004e9ae8(context, candidates, count, 1);
    u32 selected = lcgRandomRange((u16)(eligibleCount - 1));
    btlUnitGet(context)->selection.targeted[candidates[selected]] = 1;
}
}

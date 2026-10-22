/* NON_MATCHING: candidate count, status-bit and entry-walker registers differ from retail. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleTargetWorkView {
    u8 unk00[0x38];
    u8 targets[109]; // 0x38, in the full unit work slot rather than the shared unit-reference prefix
};
extern "C" {
extern BtlActionGlobals g_btlAction;
s16 FUN_004e9ae8(BtlMainStateA **context, s32 *candidates, s32 count, u32 mode);
u32 lcgRandomRange(s32 limit);
BattleTargetWorkView *btlUnitGet(BtlMainStateA **context);

// Choose and mark one random action target among combatants with the requested status bit.
void FUN_004e5a90(BtlMainStateA **context, u32 status)
{
    s32 candidates[109];
    s32 count = 0;
    u32 statusBit = 1u << (u8)status;
    BtlCombatantEntryA *entry = (*context)->entries;
    for (s32 remaining = 109; remaining != 0; --remaining, ++entry) {
        if ((entry->flags & g_btlAction.clearedFlags.mask) && (entry->statusFlags & statusBit))
            candidates[count++] = entry->indexView.selectionIndex;
    }
    s16 eligibleCount = FUN_004e9ae8(context, candidates, count, 1);
    u16 selected = (u16)lcgRandomRange(eligibleCount - 1);
    btlUnitGet(context)->targets[candidates[selected]] = 1;
}
}

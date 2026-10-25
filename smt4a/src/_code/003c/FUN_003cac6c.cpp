#include "battle/BtlMainAccess.h"
#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

extern u32 g_btlUiBlock; /* 0x57a9c8 */

void btlUiClearSelectionSlots(u32 block);
void FUN_003f26d4(BtlMainStateA *battle);
void FUN_003ebc08(BtlMainStateA *battle, s32 flag);

/* Commits the requested target counts, clears the selection slots and drops the preset's mask bits from the battle mask. */
u32 FUN_003cac6c(void)
{
    BtlMainStateA *battle = btlGetMainState();

    battle->targetCapacity.counts[0] = battle->targetCapacity.requested[0];
    battle->targetCapacity.counts[1] = battle->targetCapacity.requested[1];
    btlUiClearSelectionSlots(g_btlUiBlock);
    if ((battle->stateFlags64.bits & g_battleMaskPresets.clearView.clearMask) != 0) {
        battle->stateFlags64.bits &= ~g_battleMaskPresets.clearView.clearMask;
        FUN_003f26d4(battle);
    }
    FUN_003ebc08(battle, 1);
    return 1;
}

} /* extern "C" */

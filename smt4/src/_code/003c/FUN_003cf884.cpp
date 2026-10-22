/* NON_MATCHING: retail performs separate flag-clear stores and uses a countdown loop. */
/* Clears action-selection flags, then marks the requested active combatant as a target. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" u32 FUN_003cf884(BtlMainState **owner, BtlUnit *target, s32 selection)
{
    /* The unit array is beyond the shared IV battle-state prefix. */
    struct BattleSelectionView {
        u8 unk0000[0x1E98];
        BtlActionRecord *actions;
        u8 unk1E9C[0x124];
        BtlUnitEntry *units;
    };
    for (s32 i = 0; i < 109; ++i) {
        BattleSelectionView *state = (BattleSelectionView *)*owner;
        state->actions[i].status &= ~0xCu;
    }
    for (s32 i = 0; i < 109; ++i) {
        BattleSelectionView *state = (BattleSelectionView *)*owner;
        BtlUnitEntry *entry = &state->units[i];
        if ((entry->flags & 1) && !(entry->flags & 0x40) && entry->selectionIndex == selection) {
            target->targets[selection] = 1;
            return 1;
        }
    }
    return 0;
}

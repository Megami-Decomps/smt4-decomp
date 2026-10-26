/* Clears action-selection flags, then marks the requested active combatant as a target. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/btlUnit.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" u32 btlClearActionMarksAndSelectTarget(BtlMainState **owner, BtlUnit *target, s32 selection)
{
    for (s32 remaining = 109, i = 0; remaining != 0; --remaining, ++i) {
        (*owner)->actions[i].status &= ~4u;
        (*owner)->actions[i].status &= ~8u;
    }
    for (s32 i = 0; i < 109; ++i) {
        BtlMainState *state = (BtlMainState *)*owner;
        BtlEntry *entry = &state->entries[i];
        if ((entry->flags & 1) && !(entry->flags & 0x40) && entry->selectionIndex == selection) {
            target->targets[selection] = 1;
            return 1;
        }
    }
    return 0;
}

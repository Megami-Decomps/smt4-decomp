/* NON_MATCHING: retail preserves two action parameters on the stack; range checks and saved-register roles also differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {


// Queue reflected records for a selected combatant, then its final state-change action.
u32 FUN_00246454(s32 actor, u32 options, BtlEntry *unit)
{
    for (s32 index = 0; index < 109; ++index) {
        s16 selected = unit->selectionIndex;
        if (selected >= 0 && selected < 109) {
            BtlActionRecord *record = &btlGetMainState()->actions[index];
            if (record != NULL && (record->status & 1) && (record->status & 2) &&
                record->participant.combatantIndex == selected && (record->status & 0x400)) {
                ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
                action->flagView.flags |= 4;
                action->target = reinterpret_cast<u32>(record);
                action->kind = 0x22;
                action->value = 20;
                action->parameter = 0;
            }
        }
    }
    unit->flags |= 0x40;
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + 20), 0, options);
    action->kind = 0x24;
    action->wordValues.unk18 = reinterpret_cast<u32>(unit);
    action->value = 0;
    return 1;
}
}

/* NON_MATCHING: 16 lines. The queue walk whose result is unused is retail's (FUN_003ddbcc keeps the same walk); what
 * differs is the value-3 arm, which retail places out of line after the return (padded with nop hints) and joins to
 * the flag store, where the build tests it in line. The Apocalypse twin FUN_004fda78 differs the same way. */
#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"

extern "C" {

s16 battleGetEntryHalfword(s32 memberId, u32 field);
s32 btlScriptUnitIsIncapacitated(BtlMainState *battle);

/* Queue a reflected action with the target's zero-based entry id. */
ReflectAction *FUN_00246080(s32 actor, s32 secondary, u32 options, BtlActionRecord *target, s32 value)
{
    /* Walks the queue to its end; nothing uses the result. */
    ReflectAction *node = g_btlActionReflect->head;
    while (node != NULL) {
        node = node->next;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, (s16)secondary, options);
    action->kind = 7;
    action->value = value;
    action->target = reinterpret_cast<u32>(target);
    action->first = battleGetEntryHalfword(target->memberId, 1) - 1;
    if (value != 4) {
        if (value == 3 && !btlScriptUnitIsIncapacitated(btlGetMainState())) {
            return action;
        }
        action->flagView.flags |= 4;
    }
    return action;
}
}

#include "battle/BtlMainAccess.h"
#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "battle/btlMain.h"

extern "C" {

s16 battleGetEntryHalfword(s32 memberId, u32 field);
s32 btlScriptUnitIsIncapacitated(BtlMainState *battle);

/* Queues a reflected action with the target's zero-based entry id. */
ReflectAction *btlReflectQueueTargetEntryAction(s32 actor, s32 secondary, u32 options, BtlActionRecord *target, s32 value)
{
    /* Walks the queue to its end; nothing uses the result. */
    ReflectAction *node = g_btlActionReflect->head;
    while (node != NULL) {
        node = node->next;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, (s16)secondary, options);
    action->kind = 7;
    action->value = value;
    action->target = (u32)target;
    action->first = battleGetEntryHalfword(target->memberId, 1) - 1;
    if (value != 4 && value != 3) {
        action->flagView.flags |= 4;
    }
    if (value == 3 && btlScriptUnitIsIncapacitated(btlGetMainState())) {
        action->flagView.flags |= 4;
    }
    return action;
}
} /* extern "C" */

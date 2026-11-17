#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlReflect.h"
#include "battle/btlAction.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

/* Queues a kind-0x27 reflect action for an active source record unless one with the same argument is already queued. */
ReflectAction *btlActionQueueSourceReflect(s32 id, u32 argument, BtlActionRecord *source)
{
    ReflectAction *action;
    ReflectAction *next;
    BtlUnitData *member;
    BtlMainState *state;

    if (!(source->status & 1)) {
        return NULL;
    }
    for (action = g_btlActionReflect->head; action != NULL; action = next) {
        next = action->next;
        if (action->kind == 0x27 && action->options == argument && action->target == (u32)source) {
            return NULL;
        }
    }
    state = btlGetMainState();
    action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, argument);
    member = btlFindEntryBlockByMemberId(state, source->memberId);
    action->kind = 0x27;
    action->target = (u32)source;
    action->first = member->parts[0];
    return action;
}

} /* extern "C" */

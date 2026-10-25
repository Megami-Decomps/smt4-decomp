/* NON_MATCHING: register numbering only: retail keeps the queue pointer in r5 and the kind byte in r6; the build swaps the two. Instruction sequence is identical. */
#include "battle/btlReflect.h"
#include "common.h"

extern "C" {



/* Queues a kind-13 reflect action on `target` for `id` unless one for that target is already queued; returns the new action or NULL. */
ReflectAction *FUN_003ddc70(s32 id, s32 target, u32 value, f32 scale)
{
    ReflectContext *queue = g_btlActionReflect;
    u8 queued = 0;

    ReflectAction *action = queue->head;
    while (action != NULL) {
        u8 kind = action->kind;
        ReflectAction *next = action->next;
        if (kind == 13 && action->options == (u32)target) {
            queued = 1;
        }
        action = next;
    }
    if (queued) {
        return NULL;
    }
    action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, target);
    action->value = value;
    action->kind = 13;
    action->scalarPayload.scalar = scale;
    return action;
}

} /* extern "C" */

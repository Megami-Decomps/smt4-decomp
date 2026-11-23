#include "battle/btlReflect.h"

extern "C" {

/* Queues a kind-13 reflect action on `target` for `id` unless one for that target is already queued; returns the new action or NULL. */
ReflectAction *btlQueueUniqueScalarAction(s32 id, s32 target, u32 value, f32 scale)
{
    bool duplicate = false;
    ReflectAction *previous = g_btlActionReflect->head;
    ReflectAction *next;
    while (previous != NULL) {
        next = previous->next;
        if (previous->kind == 13 && previous->options == (u32)target) {
            duplicate = true;
        }
        previous = next;
    }
    if (duplicate) {
        return NULL;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, target);
    action->value = value;
    action->kind = 13;
    action->scalarPayload.scalar = scale;
    return action;
}

} /* extern "C" */

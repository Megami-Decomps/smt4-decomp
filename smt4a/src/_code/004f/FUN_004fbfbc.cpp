/* NON_MATCHING: register numbering only: retail keeps the queue pointer in r5 and the kind byte in r6; the build swaps the two. Instruction sequence is identical. */
#include "battle/btlReflect.h"


extern "C" {

ReflectAction *FUN_004102d8(ReflectContext *queue, s16 id, u32 mode, u32 options);

/* Queues a kind-17 reflect action on `target` for `id` unless one for that target is already queued; returns the new action or NULL. */
ReflectAction *FUN_004fbfbc(s32 id, s32 target, u32 value, f32 scale)
{
    ReflectContext *queue = g_btlActionReflect;
    bool queued = false;

    ReflectAction *action = queue->head;
    while (action != NULL) {
        u8 kind = action->kind;
        ReflectAction *next = action->next;
        if (kind == 17 && action->options == static_cast<u32>(target)) {
            queued = true;
        }
        action = next;
    }
    if (queued) {
        return NULL;
    }
    action = FUN_004102d8(g_btlActionReflect, id, 0, target);
    action->value = value;
    action->kind = 17;
    action->scalarPayload.scalar = scale;
    return action;
}

} /* extern "C" */

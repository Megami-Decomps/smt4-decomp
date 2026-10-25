#include "battle/btlReflect.h"

extern "C" {


/* Queues a kind-0x34 action; if the queue already holds one for the same actor, the new one's secondary id is cleared. */
void btlReflectQueueKind34(u32 actor, u32 options)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    ReflectAction *node;

    node = g_btlActionReflect->head;
    while (node != NULL) {
        u32 kind = node->kind;
        ReflectAction *next = node->next;
        if (kind == 0x34) {
            s16 actorId = node->actorId;
            s16 queuedActorId = action->actorId;
            if (actorId == queuedActorId && (s16)action->secondaryId >= 0) {
                action->secondaryId = -1;
                break;
            }
        }
        node = next;
    }
    action->kind = 0x34;
}
}

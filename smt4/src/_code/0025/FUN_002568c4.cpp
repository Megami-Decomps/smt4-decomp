/* NON_MATCHING: only the order of `ldr next` against `cmp kind, #52` differs (retail loads the kind, then next, then compares). */
#include "battle/btlReflect.h"

extern "C" {


/* Queues a kind-0x34 action; if the queue already holds one for the same actor, the new one's secondary id is cleared. */
void FUN_002568c4(u32 actor, u32 options)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    ReflectAction *node;

    node = g_btlActionReflect->head;
    while (node != NULL) {
        ReflectAction *next = node->next;
        if (node->kind == 0x34 && (s16)node->actorId == (s16)action->actorId && (s16)action->secondaryId >= 0) {
            action->secondaryId = -1;
            break;
        }
        node = next;
    }
    action->kind = 0x34;
}
}

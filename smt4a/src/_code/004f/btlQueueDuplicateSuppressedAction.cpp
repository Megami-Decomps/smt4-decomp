#include "battle/btlReflect.h"
#include "battle/BattleHelpers_Smt4a.h"

extern "C" {

/* Queues a kind-63 reflect action; when an earlier kind-63 action has the same id, the new one's index is set to -1. */
void btlQueueDuplicateSuppressedAction(s32 id, s32 target, u32 value)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, target);

    ReflectAction *other = g_btlActionReflect->head;
    while (other != NULL) {
        u8 kind = other->kind;
        ReflectAction *next = other->next;
        if (kind == 63) {
            s16 actorId = action->actorId;
            if ((s16)other->actorId == actorId && (s16)action->secondaryId >= 0) {
                action->secondaryId = (u16)-1;
                break;
            }
        }
        other = next;
    }
    action->value = value;
    action->kind = 63;
}

} /* extern "C" */

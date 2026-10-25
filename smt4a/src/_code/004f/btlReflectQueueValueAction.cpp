#include "battle/btlReflect.h"

extern "C" {


/* Queues this reflection action, optionally invalidating its secondary ID when an earlier empty action exists. */
void btlReflectQueueValueAction(u32 actorId, u32 options, u32 value, u32 parameter, u32 checkEarlier)
{
    ReflectAction *request = btlQueueReflectAction(g_btlActionReflect, static_cast<s16>(actorId), 0, options);
    if (checkEarlier) {
        ReflectAction *action = g_btlActionReflect->head;
        while (action != NULL) {
            u32 kind = action->kind;
            ReflectAction *next = action->next;
            if (kind == 0x13 && action->value == 0 && static_cast<s16>(request->secondaryId) >= 0) {
                request->secondaryId = 0xFFFF;
                break;
            }
            action = next;
        }
    }
    request->value = value;
    request->kind = 0x13;
    request->wordValues.unk18 = parameter;
}
}

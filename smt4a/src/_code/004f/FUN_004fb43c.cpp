/* NON_MATCHING: pre-advanced traversal matches; saved stack-argument registers swap and payload-store order differs. */
#include "battle/btlReflect.h"



/* Queue a payload action, suppressing its secondary id when the same actor/payload is queued. */
extern "C" void FUN_004fb43c(s32 actor, u32 options, void *payload, s32 initializeValue,
                            s32 suppressDuplicate, u32 parameterBits, s32 firstId)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    if (suppressDuplicate) {
        ReflectAction *previous = g_btlActionReflect->head;
        while (previous != NULL) {
            u32 kind = previous->kind;
            ReflectAction *next = previous->next;
            if (kind == 0x3B && (s16)previous->actorId == (s16)action->actorId &&
                previous->payload == reinterpret_cast<u32>(payload) && (s16)action->secondaryId >= 0) {
                action->secondaryId = (u16)-1;
                break;
            }
            previous = next;
        }
    }
    action->kind = 0x3B;
    action->payload = reinterpret_cast<u32>(payload);
    action->parameterScalar = reinterpret_cast<const f32 &>(parameterBits);
    if (initializeValue) {
        action->value = 1;
    }
    action->first = firstId;
}

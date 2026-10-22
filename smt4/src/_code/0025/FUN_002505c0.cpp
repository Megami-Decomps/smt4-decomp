/* NON_MATCHING: saved parameter registers and action-kind/next-link load scheduling differ. */
#include "battle/btlReflect.h"

extern "C" {
ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 secondary, u32 options);

// Queue a keyed scalar change, invalidating its secondary ID when a duplicate already exists.
void FUN_002505c0(s32 actor, u32 options, void *key, s32 mode, s32 checkDuplicates,
                  u32 parameter, s32 first)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    if (checkDuplicates) {
        ReflectAction *previous = g_btlActionReflect->head;
        while (previous != NULL) {
            ReflectAction *next = previous->next;
            if (previous->kind == 0x31 && (s16)previous->actorId == (s16)action->actorId &&
                previous->payload == (u32)key && (s16)action->secondaryId >= 0) {
                action->secondaryId = 0xFFFF;
                break;
            }
            previous = next;
        }
    }
    action->kind = 0x31;
    action->payload = (u32)key;
    action->parameter = parameter;
    if (mode != 0) {
        action->value = 1;
    }
    action->first = first;
}
}

#include "battle/btlReflect.h"
#include "shard/FUN_004fbeac.h"

extern "C" {


void FUN_004fbeac(s32 actor, u32 secondary, u32 value, u32 parameter, s32 cancelMatching)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, secondary);
    if (cancelMatching) {
        ReflectAction *previous = g_btlActionReflect->head;
        while (previous != NULL) {
            u32 kind = previous->kind;
            ReflectAction *next = previous->next;
            if (kind == 18 && previous->value == 0 &&
                previous->parameter == parameter && (s16)action->secondaryId >= 0) {
                action->secondaryId = (u16)-1;
                break;
            }
            previous = next;
        }
    }
    action->value = value;
    action->kind = 18;
    action->parameter = parameter;
}
}

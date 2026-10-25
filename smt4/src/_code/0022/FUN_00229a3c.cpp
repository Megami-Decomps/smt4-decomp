#include "battle/btlReflect.h"
#include "battle/btlHelp.h"

extern "C" void FUN_00229a3c(s32 actorId, u32 options, u32 value, u32 parameter, u32 checkDuplicates)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, options);
    if (checkDuplicates != 0) {
        ReflectAction* previous = g_btlActionReflect->head;
        while (previous != NULL) {
            ReflectAction* next = previous->next;
            if (previous->kind == 14 && previous->value == 0 && previous->parameter == parameter &&
                (s16)action->secondaryId >= 0) {
                action->secondaryId = (u16)-1;
                break;
            }
            previous = next;
        }
    }
    action->value = value;
    action->kind = 14;
    action->parameter = parameter;
}

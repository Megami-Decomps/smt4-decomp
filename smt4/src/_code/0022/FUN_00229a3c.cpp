/* NON_MATCHING: Retail caches the next queue link before matching; native traversal reloads it after the condition. */
#include "battle/btlReflect.h"
extern "C" 

extern "C" void FUN_00229a3c(s32 actorId, u32 options, u32 value, u32 parameter, u32 checkDuplicates)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actorId, 0, options);
    if (checkDuplicates != 0) {
        for (ReflectAction* previous = g_btlActionReflect->head; previous != NULL; previous = previous->next) {
            if (previous->kind == 14 && previous->value == 0 && previous->parameter == parameter &&
                (s16)action->secondaryId >= 0) {
                action->secondaryId = (u16)-1;
                break;
            }
        }
    }
    action->value = value;
    action->kind = 14;
    action->parameter = parameter;
}

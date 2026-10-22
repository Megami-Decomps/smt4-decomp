/* NON_MATCHING: next is loaded at the traversal step instead of being prefetched before the action tests. */
#include "battle/btlReflect.h"

extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s32 actor, u32 kind, u32 secondary);

void FUN_004fbeac(s32 actor, u32 secondary, u32 value, u32 parameter, s32 cancelMatching)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, (s16)actor, 0, secondary);
    if (cancelMatching) {
        for (ReflectAction *previous = g_btlActionReflect->head;
             previous; previous = previous->next) {
            if (previous->kind == 18 && previous->value == 0 &&
                previous->parameter == parameter && (s16)action->secondaryId >= 0) {
                action->secondaryId = (u16)-1;
                break;
            }
        }
    }
    action->value = value;
    action->kind = 18;
    action->parameter = parameter;
}
}

/* NON_MATCHING: The traversal loads the next action at the loop bottom instead of preloading it before the kind/value checks. */
#include "battle/btlReflect.h"

extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s16 actorId, s32 secondaryId, u32 options);

/* Queues this reflection action, optionally invalidating its secondary ID when an earlier empty action exists. */
void FUN_004fdc0c(u32 actorId, u32 options, u32 value, u32 parameter, u32 checkEarlier)
{
    ReflectAction *request = FUN_004102d8(g_btlActionReflect, static_cast<s16>(actorId), 0, options);
    if (checkEarlier) {
        for (ReflectAction *action = g_btlActionReflect->head; action != NULL; action = action->next) {
            if (action->kind == 0x13 && action->value == 0 && static_cast<s16>(request->secondaryId) >= 0) {
                request->secondaryId = 0xFFFF;
                break;
            }
        }
    }
    request->value = value;
    request->kind = 0x13;
    request->wordValues.unk18 = parameter;
}
}

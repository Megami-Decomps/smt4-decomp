/* NON_MATCHING: paired-action saved registers and final flag-store order differ. */
#include "battle/btlReflect.h"

extern "C" {


// Queue the two halves of an actor-pair transition with their separate scalar values.
u32 FUN_004fe900(s32 actor, u32 options, u32 target, u32 parameter, s32 actorStep,
                 u32 firstValue, u32 secondValue, s32 enabled)
{
    ReflectAction *first = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    if (!enabled) {
        first->flagView.flags |= 4;
    }
    first->kind = 0x2B;
    first->target = target;
    first->value = firstValue;
    first->parameter = parameter;

    ReflectAction *second = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + actorStep), 0, options);
    if (!enabled) {
        second->flagView.flags |= 4;
    }
    second->kind = 0x2C;
    second->target = target;
    second->value = secondValue;
    second->parameter = 0;
    return 1;
}
}

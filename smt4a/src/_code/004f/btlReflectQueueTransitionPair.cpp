#include "battle/btlReflect.h"

/* Queues the two halves of an actor-pair transition (kinds 0x2b and 0x2c) with their separate values. */
extern "C" u32 btlReflectQueueTransitionPair(s32 actor, u32 options, u32 target, u32 parameter, s32 actorStep,
                            u32 firstValue, u32 secondValue, s32 enabled)
{
    reflectCreateKind2b(actor, options, target, parameter, firstValue, enabled);
    reflectCreateKind2c(actor + actorStep, options, target, 0, secondValue, enabled);
    return 1;
}

#include "battle/btlReflect.h"

/* Queues a start/end pair (kinds 0x21 and 0x22) on `target` with separate payloads. */
extern "C" u32 btlReflectQueueTransitionPair(s32 actor, u32 options, u32 target, u32 parameter,
                           s32 actorDelta, u32 startValue, u32 endValue, s32 enabled)
{
    reflectCreateKind21(actor, options, target, parameter, startValue, enabled);
    reflectCreateKind22(actor + actorDelta, options, target, 0, endValue, enabled);
    return 1;
}

/* NON_MATCHING: saved argument registers and the second action's constant/store schedule differ; packed float payloads now use VFP. */
#include "battle/btlReflect.h"

extern "C" ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 secondary, u32 options);

/* Queue a start/end pair with separate scalar payloads. */
extern "C" u32 FUN_0023c368(s32 actor, u32 options, u32 target, u32 parameter,
                           s32 actorDelta, u32 startValueBits, u32 endValueBits, s32 enabled)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    if (!enabled) {
        action->flagView.flags |= 4;
    }
    action->kind = 0x21;
    action->target = target;
    action->scalar = reinterpret_cast<const f32 &>(startValueBits);
    action->parameter = parameter;

    action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + actorDelta), 0, options);
    if (!enabled) {
        action->flagView.flags |= 4;
    }
    action->target = target;
    action->kind = 0x22;
    action->scalar = reinterpret_cast<const f32 &>(endValueBits);
    action->parameter = 0;
    return 1;
}

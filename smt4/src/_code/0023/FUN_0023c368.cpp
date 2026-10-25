/* NON_MATCHING: saved argument registers and the second action's constant/store schedule differ; packed float payloads now use VFP. */
#include "battle/btlReflect.h"

static __inline void reflectActionSetScalar(ReflectAction *action, u8 kind,
                                            u32 target, f32 value, u32 parameter)
{
    action->kind = kind;
    action->target = target;
    action->scalar = value;
    action->parameter = parameter;
}

/* Queue a start/end pair with separate scalar payloads. */
extern "C" u32 FUN_0023c368(s32 actor, u32 options, u32 target, u32 parameter,
                           s32 actorDelta, u32 startValueBits, u32 endValueBits, s32 enabled)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    if (!enabled) {
        action->flagView.flags |= 4;
    }
    reflectActionSetScalar(action, 0x21, target,
                           reinterpret_cast<const f32 &>(startValueBits), parameter);

    action = btlQueueReflectAction(g_btlActionReflect, (s16)(actor + actorDelta), 0, options);
    if (!enabled) {
        action->flagView.flags |= 4;
    }
    reflectActionSetScalar(action, 0x22, target,
                           reinterpret_cast<const f32 &>(endValueBits), 0);
    return 1;
}

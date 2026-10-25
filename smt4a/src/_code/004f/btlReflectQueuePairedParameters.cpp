#include "battle/btlReflect.h"
extern "C" {


u32 btlReflectQueuePairedParameters(s32 actor, u32 flags, u32 value, u32 parameter,
                 u32 target, u32 first, u32 second, u32 third, u32 fourth)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, flags);
    action->kind = 30;
    action->target = target;
    action->value = value;
    action->parameter = parameter;
    action->first = first;
    action->second = second;
    action->extraIds.third = third;
    action->extraIds.fourth = fourth;
    return 1;
}
}

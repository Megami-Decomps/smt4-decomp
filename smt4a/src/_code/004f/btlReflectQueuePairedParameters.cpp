#include "battle/btlReflect.h"
extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s32 actor, s32 mode, u32 flags);

u32 btlReflectQueuePairedParameters(s32 actor, u32 flags, u32 value, u32 parameter,
                 u32 target, u32 first, u32 second, u32 third, u32 fourth)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, (s16)actor, 0, flags);
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

#include "battle/btlReflect.h"
extern "C" {
ReflectAction *FUN_0022699c(ReflectContext *context, s32 actor, s32 mode, u32 source);

// Create the target-object action and populate its four additional IDs.
u32 FUN_0023f27c(s32 actor, u32 source, u32 value, u32 parameter, void *target,
                 s32 first, s32 second, s32 third, s32 fourth)
{
    ReflectAction *action = FUN_0022699c(g_btlActionReflect, (s16)actor, 0, source);
    action->kind = 0x15;
    action->target = reinterpret_cast<u32>(target);
    action->value = value;
    action->parameter = parameter;
    action->first = first;
    action->second = second;
    action->extraIds.third = third;
    action->extraIds.fourth = fourth;
    return 1;
}
}

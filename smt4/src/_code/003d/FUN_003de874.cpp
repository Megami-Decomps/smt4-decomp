#include "shard/W6_W6Match2_ReflectAction.h"

extern "C" ReflectAction *FUN_0022699c(ReflectContext *, s16, s16, u32);

// Set up a kind-two reflection action from its three integer payload words.
extern "C" void FUN_003de874(s32 first, s32 second, u32 argument, u32 target,
                            u32 parameter, u32 secondaryValue, u32 value)
{
    ReflectAction *action = FUN_0022699c(g_btlActionReflect, (s16)first, (s16)second,
                                        argument);
    action->kind = 2;
    action->target = target;
    action->value = value;
    action->parameter = parameter;
    action->wordValues.second = secondaryValue;
}

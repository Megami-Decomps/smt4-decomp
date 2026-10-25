#include "battle/btlReflect.h"


// Set up a kind-ten reflection action with its target, value, and integer parameter.
extern "C" void FUN_004fe764(s32 unit, u32 argument, u32 target, u32 value,
                            u32 parameter)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)unit, 0, argument);
    action->kind = 10;
    action->target = target;
    action->value = value;
    action->parameter = parameter;
}

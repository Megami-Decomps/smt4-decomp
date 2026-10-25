#include "battle/btlReflect.h"


// Create a type-0x25 reflected action with a target, value and extra parameter.
extern "C" void btlReflectCreateKind25(s32 id, u32 flags, u32 target, u32 parameter, u32 value)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x25;
    action->target = target;
    action->value = value;
    action->parameter = parameter;
}

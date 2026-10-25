#include "battle/btlReflect.h"


// Create a type-0x43 reflected action with an index, value and extra parameter.
extern "C" void btlReflectCreateKind43(s32 id, u32 index, u32 flags, u32 value, u32 parameter)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x43;
    action->value = value;
    action->parameter = parameter;
    action->first = index;
}

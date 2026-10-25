#include "battle/btlReflect.h"


// Create a type-0x10 action with payload words and two IDs.
extern "C" void btlReflectCreateKind10(s32 id, u32 flags, u32 value, u32 first,
                           u32 payload, u32 parameter, u16 second)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x10;
    action->value = value;
    action->parameter = parameter;
    action->second = second;
    action->first = first;
    action->payload = payload;
}

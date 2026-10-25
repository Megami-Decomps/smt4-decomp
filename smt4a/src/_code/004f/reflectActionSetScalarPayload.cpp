#include "battle/btlReflect.h"


// Create a type-0x3c reflected action with two indices and two payload words.
extern "C" void reflectActionSetScalarPayload(s32 id, u32 flags, u32 payload, u16 first, u16 second, u32 value)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x3c;
    action->first = first;
    action->second = second;
    action->value = value;
    action->payload = payload;
}

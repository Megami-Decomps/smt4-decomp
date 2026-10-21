#include "shard/W6_W6Match2_ReflectAction.h"

extern "C" ReflectAction* FUN_004102d8(ReflectContext* context, s32 id, s32 target, u32 flags);

// Create a type-0x10 action with payload words and two IDs.
extern "C" void btlReflectCreateKind10(s32 id, u32 flags, u32 value, u32 first,
                           u32 payload, u32 parameter, u16 second)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x10;
    action->value = value;
    action->parameter = parameter;
    action->second = second;
    action->first = first;
    action->payload = payload;
}

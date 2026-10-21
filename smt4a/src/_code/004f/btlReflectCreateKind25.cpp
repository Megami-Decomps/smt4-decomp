#include "shard/W6_W6Match2_ReflectAction.h"

extern "C" ReflectAction* FUN_004102d8(ReflectContext* context, s32 id, s32 target, u32 flags);

// Create a type-0x25 reflected action with a target, value and extra parameter.
extern "C" void btlReflectCreateKind25(s32 id, u32 flags, u32 target, u32 parameter, u32 value)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x25;
    action->target = target;
    action->value = value;
    action->parameter = parameter;
}

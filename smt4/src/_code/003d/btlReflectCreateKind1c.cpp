#include "battle/btlReflect.h"
extern "C" ReflectAction* FUN_0022699c(ReflectContext* context, s32 id, s32 target, u32 flags);

// Create a type-0x1c reflected action with a target, value and extra parameter.
extern "C" void btlReflectCreateKind1c(s32 id, u32 flags, u32 target, u32 parameter, u32 value)
{
    ReflectAction* action = FUN_0022699c(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x1c;
    action->target = target;
    action->value = value;
    action->parameter = parameter;
}

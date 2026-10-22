#include "battle/btlReflect.h"
extern "C" ReflectAction* FUN_004102d8(ReflectContext* context, s32 id, s32 target, u32 flags);

// Create a type-0x43 reflected action with an index, value and extra parameter.
extern "C" void btlReflectCreateKind43(s32 id, u32 index, u32 flags, u32 value, u32 parameter)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x43;
    action->value = value;
    action->parameter = parameter;
    action->first = index;
}

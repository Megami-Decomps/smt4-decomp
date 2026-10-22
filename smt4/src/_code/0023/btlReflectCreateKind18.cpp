#include "battle/btlReflect.h"
extern "C" {
ReflectAction* FUN_0022699c(ReflectContext* context, s32 id, s32 target, u32 flags);

// Create a type-0x18 reflected action with two indices and a payload word.
void btlReflectCreateKind18(s32 id, u32 flags, u16 first, u16 second, u32 value)
{
    ReflectAction* action = FUN_0022699c(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 0x18;
    action->first = first;
    action->second = second;
    action->value = value;
}
}

#include "shard/W6_W6Match3_ReflectAction.h"

extern "C" {
extern ReflectAction* g_btlActionReflect;
ReflectAction* FUN_0022699c(ReflectAction* action, s32 id, s32 kind, u32 flags);

// Initialize the kind-9 reflected action and its payload.
void btlReflectInitKind9(s32 id, u32 flags, u32 value, u32 target, u32 option)
{
    ReflectAction* action = FUN_0022699c(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 9;
    action->value = value;
    action->target = target;
    action->option = option;
}
}

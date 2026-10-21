#include "shard/W6_W6Match3_ReflectAction.h"

extern "C" {
extern ReflectAction* g_btlActionReflect;
ReflectAction* FUN_004102d8(ReflectAction* action, s32 first, s32 second, u32 flags);

// Initialize the kind-3 reflected action from two ids and four payload values.
void btlReflectInitKind3(s32 first, s32 second, u32 flags, u32 value,
                  u32 option, u32 auxiliary, u32 target)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, (s16)first, (s16)second, flags);
    action->kind = 3;
    action->value = value;
    action->target = target;
    action->option = option;
    action->auxiliary = auxiliary;
}
}

#include "battle/btlReflect.h"
extern "C" {

ReflectAction* btlQueueReflectAction(ReflectContext* context, s32 id, s32 kind, u32 flags);

// Initialize the kind-9 reflected action and its payload.
void btlReflectInitKind9(s32 id, u32 flags, u32 value, u32 target, u32 option)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, flags);
    action->kind = 9;
    action->target = value;
    action->value = target;
    action->parameter = option;
}
}

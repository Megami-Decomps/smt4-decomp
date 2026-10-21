#include "shard/W6_W6Match2_ReflectAction.h"

extern "C" ReflectAction* FUN_0022699c(ReflectContext*, s32, s32, u32);

// Queue a word-valued command, optionally marking it as an immediate action.
extern "C" void btlReflectCreateKind21(s32 id, u32 flags, u32 target,
                           u32 parameter, u32 value, s32 enabled)
{
    ReflectAction* action = FUN_0022699c(g_btlActionReflect, (s16)id, 0, flags);
    if (enabled == 0) {
        action->flagView.flags |= 4;
    }
    action->target = target;
    action->kind = 0x21;
    action->value = value;
    action->parameter = parameter;
}

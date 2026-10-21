#include "shard/W6_W6Match2_ReflectAction.h"

extern "C" {
ReflectAction *FUN_0022699c(ReflectContext *context, s32 actor, s32 mode, u32 flags);

// Create action34 with its target, integer payload and additional parameter.
void FUN_002451c4(s32 actor, u32 flags, u32 target, u32 parameter, u32 payload, s32 enabled)
{
    ReflectAction *action = FUN_0022699c(g_btlActionReflect, (s16)actor, 0, flags);
    if (!enabled)
        action->flagView.flags |= 4;
    action->target = target;
    action->kind = 0x22;
    action->value = payload;
    action->parameter = parameter;
}
}

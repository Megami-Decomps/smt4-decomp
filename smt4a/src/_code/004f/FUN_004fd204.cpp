#include "battle/btlReflect.h"
extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s32 actor, s32 mode, u32 flags);

// Create action44 with its target, integer payload and additional parameter.
void FUN_004fd204(s32 actor, u32 flags, u32 target, u32 parameter, u32 payload, s32 enabled)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, (s16)actor, 0, flags);
    if (!enabled)
        action->flagView.flags |= 4;
    action->target = target;
    action->kind = 0x2c;
    action->value = payload;
    action->parameter = parameter;
}
}

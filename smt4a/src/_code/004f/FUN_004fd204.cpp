#include "battle/btlReflect.h"
extern "C" {


// Create action44 with its target, integer payload and additional parameter.
void FUN_004fd204(s32 actor, u32 flags, u32 target, u32 parameter, u32 payload, s32 enabled)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, flags);
    if (!enabled)
        action->flagView.flags |= 4;
    action->target = target;
    action->kind = 0x2c;
    action->value = payload;
    action->parameter = parameter;
}
}

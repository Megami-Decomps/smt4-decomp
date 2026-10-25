#include "battle/btlReflect.h"
extern "C" {


// Configure reflect action 22 with its value and two word parameters.
void FUN_004fd1b8(s32 actor, u32 flags, u32 value, u32 parameter, u32 auxiliary)
{
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, flags);
    action->kind = 22;
    action->value = value;
    action->wordValues.unk18 = auxiliary;
    action->parameter = parameter;
}
}

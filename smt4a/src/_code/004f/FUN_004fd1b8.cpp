#include "battle/btlReflect.h"
extern "C" {
ReflectAction *FUN_004102d8(ReflectContext *context, s32 actor, s32 mode, u32 flags);

// Configure reflect action 22 with its value and two word parameters.
void FUN_004fd1b8(s32 actor, u32 flags, u32 value, u32 parameter, u32 auxiliary)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, (s16)actor, 0, flags);
    action->kind = 22;
    action->value = value;
    action->wordValues.unk18 = auxiliary;
    action->parameter = parameter;
}
}

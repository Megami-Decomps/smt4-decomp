#include "battle/btlReflect.h"
extern "C" {
ReflectAction* FUN_004102d8(ReflectContext* context, s32 id, s32 mode, u32 argument);

void FUN_004fd268(s32 id, u32 argument, u32 target, u32 option, u32 value, s32 enabled)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, static_cast<s16>(id), 0, argument);
    if (enabled == 0) {
        action->flagView.flags |= 4;
    }
    action->target = target;
    action->kind = 0x2b;
    action->value = value;
    action->parameter = option;
}
}

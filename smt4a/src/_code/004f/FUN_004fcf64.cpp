#include "battle/btlReflect.h"
extern "C" {



void FUN_004fcf64(s32 first, s32 flags, u32 firstValue, s32 secondValue,
                  s32 target, s32 option, f32 scalar)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)first, 0, flags);
    action->kind = 0x46;
    action->first = firstValue;
    action->second = secondValue;
    action->scalarPayload.scalar = scalar;
    action->value = target;
    action->parameter = option;
}

} // extern "C"

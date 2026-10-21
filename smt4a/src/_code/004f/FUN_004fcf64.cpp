#include "shard/W6_W6Match3_ReflectAction.h"

extern "C" {

extern ReflectAction* g_btlActionReflect;
ReflectAction* FUN_004102d8(ReflectAction* action, s32 first, s32 second, u32 flags);

void FUN_004fcf64(s32 first, s32 flags, u32 firstValue, s32 secondValue,
                  s32 target, s32 option, f32 scalar)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, (s16)first, 0, flags);
    action->kind = 0x46;
    action->parameters.first = firstValue;
    action->parameters.second = secondValue;
    action->payload.scalar = scalar;
    action->target = target;
    action->option = option;
}

} // extern "C"

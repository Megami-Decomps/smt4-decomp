#include "shard/W6_W6Match2_ReflectAction.h"

extern "C" {
ReflectAction* FUN_004102d8(ReflectContext* context, s32 source, s32 flags, u32 target);

// Enqueues a type-0x21 reflection action with two halfword parameters and a scalar.
__softfp void btlReflectRequestPairScalar(s32 source, u32 target, u16 first, u16 second, f32 scalar)
{
    ReflectAction* action = FUN_004102d8(g_btlActionReflect, static_cast<s16>(source), 0, target);
    action->kind = 0x21;
    action->first = first;
    action->second = second;
    action->scalar = scalar;
}
}

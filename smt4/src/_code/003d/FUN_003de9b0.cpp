#include "battle/btlReflect.h"
struct ReflectContext;

extern "C" {
extern ReflectContext* g_btlActionReflect;
ReflectAction* btlQueueReflectAction(ReflectContext* context, s32 actionId,
                          s32 flags, u32 argument);

void FUN_003de9b0(s32 actionId, u32 argument, u32 value)
{
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)actionId, 0, argument);
    action->kind = 0x20;
    action->value = value;
}
}

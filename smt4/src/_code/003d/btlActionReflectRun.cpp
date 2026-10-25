#include "battle/btlReflect.h"
#include "common.h"

extern "C" {

void btlActionReflectRun(s32 actionId, u32 argument)
{
    ReflectAction *result = btlQueueReflectAction(g_btlActionReflect, (s16)actionId, 0, argument);
    result->kind = 0x29;
}
}

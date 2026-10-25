#include "battle/btlReflect.h"

extern "C" {
/* Creates a reflection entry in state 57. */
void btlActionReflectSetStateArg(s32 id, u32 options, u32 argument)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 57;
    entry->value = argument;
}
}

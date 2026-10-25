#include "battle/btlReflect.h"

extern "C" {
/* Creates reflection state 25 with two arguments. */
ReflectAction *btlReflectCreateKind19(s32 id, u32 options, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 25;
    entry->value = first;
    entry->parameter = second;
    return entry;
}
}

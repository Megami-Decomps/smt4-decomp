#include "battle/btlReflect.h"

extern "C" {
/* Creates reflection state 68 with two arguments. */
ReflectAction *btlReflectCreateKind44(s32 id, u32 options, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 68;
    entry->value = first;
    entry->parameter = second;
    return entry;
}
}

#include "battle/btlReflect.h"

extern "C" {
/* Creates reflection state 55 with two arguments. */
ReflectAction *btlReflectCreateKind37(s32 id, u32 options, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 55;
    entry->target = first;
    entry->value = second;
    return entry;
}
}

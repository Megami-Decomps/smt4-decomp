#include "battle/btlReflect.h"

extern "C" {
/* Creates reflection state 66 with two arguments. */
ReflectAction *btlReflectCreateKind42(s32 id, u32 options, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 66;
    entry->value = first;
    entry->parameter = second;
    return entry;
}
}

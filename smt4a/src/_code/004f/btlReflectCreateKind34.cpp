#include "battle/btlReflect.h"

extern "C" {
/* Creates reflection state 52 with two arguments. */
ReflectAction *btlReflectCreateKind34(s32 id, u32 options, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 52;
    entry->value = second;
    entry->wordValues.unk18 = first;
    return entry;
}
}

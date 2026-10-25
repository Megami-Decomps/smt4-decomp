#include "battle/btlReflect.h"

extern "C" {
/* Creates reflection state 21 with two arguments. */
ReflectAction *btlReflectCreateKind15(s32 id, u32 options, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 21;
    entry->value = first;
    entry->wordValues.unk18 = second;
    return entry;
}
}

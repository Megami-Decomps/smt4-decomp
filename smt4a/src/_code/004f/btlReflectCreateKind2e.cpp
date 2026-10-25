#include "battle/btlReflect.h"
#include "battle/btlDebug.h"

extern "C" {
/* Creates reflection state 46 with two arguments. */
ReflectAction *btlReflectCreateKind2e(s32 id, u32 options, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, options);
    entry->kind = 46;
    entry->wordValues.unk18 = first;
    entry->value = second;
    return entry;
}
}

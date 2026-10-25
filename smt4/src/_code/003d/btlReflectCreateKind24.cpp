#include "battle/btlReflect.h"
#include "common.h"
#include "shard/btlReflectCreateKind24.h"

extern "C" {
/* Stores both parameters in a mode-thirty-six reflection entry. */
ReflectAction *btlReflectCreateKind24(s32 slot, u32 extra, u32 first, u32 second)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)slot, 0, extra);
    entry->kind = 36;
    entry->wordValues.unk18 = first;
    entry->value = second;
    return entry;
}
}

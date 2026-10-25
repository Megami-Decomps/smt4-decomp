#include "battle/btlReflect.h"

extern "C" {


/* Updates a battle reflection slot. */
void FUN_003dda20(u32 slot, u32 extra, u32 value)
{
    slot = (s16)slot;
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, slot, 0, extra);
    entry->kind = 47;
    entry->value = value;
}
}

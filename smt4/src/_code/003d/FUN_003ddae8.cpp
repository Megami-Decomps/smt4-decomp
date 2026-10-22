#include "battle/btlReflect.h"

extern "C" {

ReflectAction *btlQueueReflectAction(ReflectContext *state, u32 slot, u32 kind, u32 extra);
/* Updates a battle reflection slot. */
void FUN_003ddae8(u32 slot, u32 extra)
{
    slot = (s16)slot;
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, slot, 0, extra);
    entry->kind = 3;
 }
}

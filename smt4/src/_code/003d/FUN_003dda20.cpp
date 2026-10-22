#include "battle/btlReflect.h"

extern "C" {

ReflectAction *FUN_0022699c(ReflectContext *state, u32 slot, u32 kind, u32 extra);
/* Updates a battle reflection slot. */
void FUN_003dda20(u32 slot, u32 extra, u32 value)
{
    slot = (s16)slot;
    ReflectAction *entry = FUN_0022699c(g_btlActionReflect, slot, 0, extra);
    entry->kind = 47;
    entry->value = value;
}
}

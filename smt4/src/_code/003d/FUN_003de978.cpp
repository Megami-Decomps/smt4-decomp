#include "battle/btlReflect.h"

extern "C" {

ReflectAction *FUN_0022699c(ReflectContext *state, s16 slot, u32 mode, u32 extra);
/* Sets the reflection entry's active value and mode. */
s32 FUN_003de978(s32 slot, u32 extra, u32 value)
{
    ReflectAction *entry = FUN_0022699c(g_btlActionReflect, (s16)slot, 0, extra);
    entry->kind = 26;
    entry->value = value;
    return 1;
}
}

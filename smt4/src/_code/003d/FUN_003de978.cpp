#include "battle/btlReflect.h"

extern "C" {

ReflectAction *btlQueueReflectAction(ReflectContext *state, s16 slot, u32 mode, u32 extra);
/* Sets the reflection entry's active value and mode. */
s32 FUN_003de978(s32 slot, u32 extra, u32 value)
{
    ReflectAction *entry = btlQueueReflectAction(g_btlActionReflect, (s16)slot, 0, extra);
    entry->kind = 26;
    entry->value = value;
    return 1;
}
}

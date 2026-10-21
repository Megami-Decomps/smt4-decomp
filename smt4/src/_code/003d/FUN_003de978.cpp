#include "common.h"

struct ReflectEntry { u32 unk00; u8 slot; u8 unk05[0x23]; u32 active; };
extern "C" {
extern ReflectEntry *g_btlActionReflect;
ReflectEntry *FUN_0022699c(ReflectEntry *state, s16 slot, u32 mode, u32 extra);
/* Sets the reflection entry's active value and mode. */
s32 FUN_003de978(s32 slot, u32 extra, u32 value)
{
    ReflectEntry *entry = FUN_0022699c(g_btlActionReflect, (s16)slot, 0, extra);
    entry->slot = 26;
    entry->active = value;
    return 1;
}
}

#include "common.h"
struct ReflectEntry {
    u32 unk00;
    u8 mode;
    u8 padding5[0x13];
    u32 second;
    u8 padding1c[0xc];
    u32 first;
};
extern "C" {
extern ReflectEntry *g_btlActionReflect;
ReflectEntry *btlQueueReflectAction(ReflectEntry *state, s16 slot, u32 mode, u32 extra);
/* Stores both parameters in the selected reflection mode. */
ReflectEntry *btlReflectCreateKind2a(s32 slot, u32 extra, u32 first, u32 second)
{
    ReflectEntry *entry = btlQueueReflectAction(g_btlActionReflect, (s16)slot, 0, extra);
    entry->mode = 42;
    entry->first = second;
    entry->second = first;
    return entry;
}
}

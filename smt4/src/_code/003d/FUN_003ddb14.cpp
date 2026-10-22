/* NON_MATCHING: retail forms a shared vector base before grouped stores; the typed field accesses are separate. */
#include "common.h"

struct ReflectEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 mode;
    /* 0x05 */ u8 unk05[0x13];
    /* 0x18 */ u32 first;
    /* 0x1c */ u8 unk1c[12];
    /* 0x28 */ u32 second;
};
extern "C" {
extern ReflectEntry *g_btlActionReflect;
ReflectEntry *btlQueueReflectAction(ReflectEntry *state, s16 slot, u32 mode, u32 extra);
/* Stores both parameters in a mode-thirty-six reflection entry. */
void FUN_003ddb14(s32 slot, u32 extra, u32 first, u32 second)
{
    ReflectEntry *entry = btlQueueReflectAction(g_btlActionReflect, (s16)slot, 0, extra);
    entry->mode = 36;
    entry->first = first;
    entry->second = second;
}
}

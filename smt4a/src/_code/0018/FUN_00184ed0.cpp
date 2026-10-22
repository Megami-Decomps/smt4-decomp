/* Returns the owner's current entry, or its fallback entry when the two counters differ (0 when no object). */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk000[0x2f4];   /* 0x000 */
    s32 fallbackEntry;  /* 0x2f4 */
    u8 unk2f8[0x30];    /* 0x2f8 */
    s32 counterB;       /* 0x328 */
    s32 counterA;       /* 0x32c */
} EntryOwner;

typedef struct {
    u32 unk00;          /* 0x00 */
    EntryOwner *owner;  /* 0x04 */
} EntryGlobals;

extern EntryGlobals g_callbackOwnerSlots;

s32 FUN_00184ed0(void)
{
    s32 value;
    EntryOwner *owner = g_callbackOwnerSlots.owner;

    if (owner == NULL) {
        value = 0;
    } else {
        value = (owner->counterA == owner->counterB) ? owner->counterA : owner->fallbackEntry;
    }
    return value;
}

} /* extern "C" */

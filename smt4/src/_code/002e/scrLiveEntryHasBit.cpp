#include "common.h"

extern "C" {

typedef struct BtlEntry {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1C2];
    /* 0x1C6 */ u16 mask;       /* one bit per script argument value */
    /* 0x1C8 */ u8 unk1C8[0xC0];
} BtlEntry; /* 0x288 */

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlEntry *entries;
} BtlMainState;

extern u32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);
extern BtlMainState *btlGetMainState(void);

/* Script command: result is 1 when a live entry (flags 0x11, not 0x40) has the argument's bit in its mask. */
s32 scrLiveEntryHasBit(void)
{
    u32 bit = scrGetArg(0);
    s32 i;

    for (i = 0; i < 0x6d; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && (entry->mask & (1 << bit)) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */

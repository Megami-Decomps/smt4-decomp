#include "common.h"

extern "C" {

typedef struct BtlEntry {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x6E];
    /* 0x072 */ s16 params[16];     /* indexed by the selected kind (7, 10 or 11) */
    /* 0x092 */ u8 unk092[0x3C];
    /* 0x0CE */ u16 id;
    /* 0x0D0 */ u8 unk0D0[0x1B8];
} BtlEntry; /* 0x288 */

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlEntry *entries;
} BtlMainState;

extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);
extern BtlMainState *btlGetMainState(void);

/* Script command: result is 1 when a live entry with the given id has the compared parameter
 * (kind 0, 1 or 2 selects it) equal to the third argument. */
s32 FUN_002fee78(void)
{
    s32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 index = 0;
    s32 value;
    s32 i;

    if (kind == 0) {
        index = 7;
    } else if (kind == 1) {
        index = 10;
    } else if (kind == 2) {
        index = 11;
    }
    value = scrGetArg(2);
    for (i = 0; i < 0x6d; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && entry->id == id && entry->params[index] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */

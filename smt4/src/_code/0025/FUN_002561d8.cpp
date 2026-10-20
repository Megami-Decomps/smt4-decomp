#include "common.h"

extern "C" {

typedef struct BtlEntry {
    /* 0x000 */ u32 flags;      /* bit 0: in use */
    /* 0x004 */ u8 unk004[0x284];
} BtlEntry; /* 0x288 */

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlEntry *entries;
} BtlMainState;

/* Entry `index` (0-108) if its in-use bit matches `wantUsed`; NULL otherwise. */
BtlEntry *FUN_002561d8(BtlMainState *state, s32 index, s32 wantUsed)
{
    BtlEntry *entry;
    u32 used;

    if (index < 0) {
        return NULL;
    }
    if (index >= 0x6d) {
        return NULL;
    }
    entry = &state->entries[index];
    used = entry->flags & 1;
    if (wantUsed != 0) {
        if (used != 0) {
            return entry;
        }
    } else if (used == 0) {
        return entry;
    }
    return NULL;
}

} /* extern "C" */

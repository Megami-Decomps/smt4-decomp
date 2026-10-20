/* NON_MATCHING: retail hoists the NULL return value into r3 before the loop (mov r3, #0 ... mov r0, r3); built returns a literal 0 */
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

/* Returns the first unused entry of the dynamic range (entries 4-53); NULL if all are in use. */
BtlEntry *FUN_0033a5a0(BtlMainState *state)
{
    s32 i = 4;

    do {
        if ((state->entries[i].flags & 1) == 0) {
            return &state->entries[i];
        }
        i = (s16)(i + 1);
    } while (i < 0x36);
    return NULL;
}

} /* extern "C" */

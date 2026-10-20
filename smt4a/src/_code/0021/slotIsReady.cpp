#include "common.h"

extern "C" {

typedef struct Slot002121c4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 timer;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u8 state;        /* 0 = unused, 3 = waiting on the timer */
    /* 0x11 */ u8 unk11[3];
} Slot002121c4;

extern Slot002121c4 DAT_006357d8[]; /* 0x6357d8 */

/* True when slot `index` is in use and, if waiting (state 3), its timer has run out. */
u32 slotIsReady(s32 index)
{
    Slot002121c4 *slot = &DAT_006357d8[index];

    if (slot->state == 0) {
        return 0;
    }
    if (slot->state == 3 && slot->timer >= 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

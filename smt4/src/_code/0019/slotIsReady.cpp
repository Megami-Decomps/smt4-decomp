#include "common.h"

extern "C" {

typedef struct Slot00192654 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 timer;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u8 state;        /* 0 = unused, 3 = waiting on the timer */
    /* 0x11 */ u8 unk11[3];
} Slot00192654;

extern Slot00192654 DAT_004d9758[]; /* 0x4d9758 */

/* True when slot `index` is in use and, if waiting (state 3), its timer has run out. */
u32 slotIsReady(s32 index)
{
    Slot00192654 *slot = &DAT_004d9758[index];

    if (slot->state == 0) {
        return 0;
    }
    if (slot->state == 3 && slot->timer >= 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

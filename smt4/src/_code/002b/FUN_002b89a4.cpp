#include "common.h"
#include "shard/FUN_002b89a4.h"

extern "C" {

typedef struct SlotState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u8 state;
    /* 0x11 */ u8 unk11[3];
} SlotState;                         /* 0x14 */

extern SlotState DAT_004d9758[];

/* Returns 1 if slot `index` is idle (state 0) or in state 3 with a positive count, else 0. */
u32 FUN_002b89a4(s32 index)
{
    SlotState *slot = &DAT_004d9758[index];

    if (slot->state != 0 && (slot->state != 3 || slot->count < 1)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

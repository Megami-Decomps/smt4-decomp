#include "common.h"
#include "camp/Unite/UniteEffect.h"

extern "C" {

typedef struct SlotState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u8 state;
    /* 0x11 */ u8 unk11[3];
} SlotState;                         /* 0x14 */

extern SlotState g_screenFadeSlots[];

/* Returns 1 if slot `index` is idle (state 0) or in state 3 with a positive count, else 0. */
u32 screenFaderIsSettled(s32 index)
{
    SlotState *slot = &g_screenFadeSlots[index];

    if (slot->state != 0 && (slot->state != 3 || slot->count < 1)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

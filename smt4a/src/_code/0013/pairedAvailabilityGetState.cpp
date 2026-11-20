#include "common.h"
#include "code/Code0013.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 state;
    /* 0x11 */ u8 unk11[3];
} Slot;                         /* 0x14 */
extern Slot g_screenFadeSlots[];

/* Returns the state byte of slot `index`. */
u8 pairedAvailabilityGetState(s32 index)
{
    return g_screenFadeSlots[index].state;
}

} /* extern "C" */

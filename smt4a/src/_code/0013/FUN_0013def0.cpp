#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 state;
    /* 0x11 */ u8 unk11[3];
} Slot;                         /* 0x14 */
extern Slot DAT_006357d8[];

/* Returns the state byte of slot `index`. */
u8 FUN_0013def0(s32 index)
{
    return DAT_006357d8[index].state;
}

} /* extern "C" */

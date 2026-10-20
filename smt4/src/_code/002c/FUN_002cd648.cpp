#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x4C];
} Slot;

typedef struct CecProcess {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ Slot slots[0xC];
} CecProcess;

extern CecProcess *g_cecProcess; /* 0x43de68 */

/* Address of slot `index` (0-11, 0x4C bytes each) of the CEC process, or 0. */
int FUN_002cd648(u32 index)
{
    int slot = 0;

    if ((index < 0xc) && (g_cecProcess != NULL)) {
        slot = (int)&g_cecProcess->slots[index];
    }
    return slot;
}

} /* extern "C" */

#include "cec/CecProcessGlobal.h"

extern "C" {

/* Address of slot `index` (0-11, 0x4C bytes each) of the CEC process, or 0. */
int cecSlotGet(u32 index)
{
    int slot = 0;
    if ((index < 0xc) && (g_cecProcess != NULL)) {
        slot = (int)&g_cecProcess->slots[index];
    }
    return slot;
}

} /* extern "C" */

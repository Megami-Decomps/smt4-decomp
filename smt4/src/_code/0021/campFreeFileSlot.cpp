#include "common.h"

extern "C" {

int fileSlotFree(int id);

void campFreeFileSlot(void)
{
    fileSlotFree(0x15);
}

} /* extern "C" */

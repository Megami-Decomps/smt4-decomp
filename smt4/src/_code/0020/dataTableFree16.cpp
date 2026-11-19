#include "common.h"

extern "C" {

int fileSlotFree(int id);

void dataTableFree16(void)
{
    fileSlotFree(0x16);
}

} /* extern "C" */

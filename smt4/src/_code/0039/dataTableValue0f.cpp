#include "common.h"

extern "C" {

int fileSlotGetBuffer(int id);

/* Returns the buffer of file slot 15 (its callers use the result). */
int dataTableValue0f(void)
{
    return fileSlotGetBuffer(0xf);
}

} /* extern "C" */

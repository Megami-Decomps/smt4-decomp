#include "common.h"

extern "C" {

void *fileSlotGetBuffer(u32 id);

/* The buffer of file slot 0x13. */
void *FUN_002cf11c(void)
{
    return fileSlotGetBuffer(0x13);
}

} /* extern "C" */

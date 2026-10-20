#include "common.h"

extern "C" {

/* Reads word 16 of the 3DS shared-memory page at 0x1ff80000 (the kernel configuration area). */
u32 nnosGetAppMemAlloc(void)
{
    return ((u32 *)0x1ff80000)[16];
}

} /* extern "C" */

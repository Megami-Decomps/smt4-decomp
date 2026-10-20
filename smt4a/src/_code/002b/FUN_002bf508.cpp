#include "common.h"

extern "C" {

extern void *DAT_0057f118;

/* Returns whether there is an object at 0x57F118. */
u8 FUN_002bf508(void)
{
    return DAT_0057f118 != NULL;
}

} /* extern "C" */

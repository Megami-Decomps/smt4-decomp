#include "common.h"

extern "C" {

extern void *DAT_0057f2c4;

/* Returns whether there is an object at 0x57F2C4. */
u8 FUN_002f1964(void)
{
    return DAT_0057f2c4 != NULL;
}

} /* extern "C" */

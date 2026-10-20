#include "common.h"

extern "C" {

extern void *DAT_0057f268;

/* Returns whether there is an object at 0x57F268. */
u8 FUN_002c334c(void)
{
    return DAT_0057f268 != NULL;
}

} /* extern "C" */

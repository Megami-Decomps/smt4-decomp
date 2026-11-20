#include "common.h"

extern "C" {

extern u8 DAT_00647678[];

/* Returns the address of the object at 0x647678. */
u8 *dspFxStateGet(void)
{
    return DAT_00647678;
}

} /* extern "C" */

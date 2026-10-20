#include "common.h"

extern "C" {

extern u8 DAT_00643368[];

/* Returns the address of the object at 0x643368. */
u8 *FUN_001bd5f8(void)
{
    return DAT_00643368;
}

} /* extern "C" */

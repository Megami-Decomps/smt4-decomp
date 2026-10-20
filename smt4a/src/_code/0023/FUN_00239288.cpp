#include "common.h"

extern "C" {

extern u8 DAT_005e2074[];

/* Returns the address of the table at 0x5E2074. */
u8 *FUN_00239288(void)
{
    return DAT_005e2074;
}

} /* extern "C" */

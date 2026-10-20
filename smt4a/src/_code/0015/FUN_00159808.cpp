#include "common.h"

extern "C" {

extern u8 g_nnHidServiceHandle[];

/* Returns the address of the object at 0x00643098. */
u8 *FUN_00159808(void)
{
    return g_nnHidServiceHandle;
}

} /* extern "C" */

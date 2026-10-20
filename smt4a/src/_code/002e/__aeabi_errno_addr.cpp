#include "common.h"

extern "C" {

extern u8 DAT_0064bfb8[];

/* Returns the address of the object at 0x64BFB8. */
u8 *__aeabi_errno_addr(void)
{
    return DAT_0064bfb8;
}

} /* extern "C" */

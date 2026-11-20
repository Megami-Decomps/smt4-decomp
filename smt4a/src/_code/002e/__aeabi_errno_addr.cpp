#include "common.h"

extern "C" {

extern u8 g_errno[];

/* Returns the address of the object at 0x64BFB8. */
u8 *__aeabi_errno_addr(void)
{
    return g_errno;
}

} /* extern "C" */

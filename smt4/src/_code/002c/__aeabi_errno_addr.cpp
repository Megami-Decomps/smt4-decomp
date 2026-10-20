#include "common.h"

extern "C" {

extern u8 g_errno;

u8 *__aeabi_errno_addr(void)
{
    return &g_errno;
}

} /* extern "C" */

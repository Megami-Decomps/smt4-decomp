#include "common.h"

extern "C" {

extern u8 DAT_004efce0;

u8 *__aeabi_errno_addr(void)
{
    return &DAT_004efce0;
}

} /* extern "C" */

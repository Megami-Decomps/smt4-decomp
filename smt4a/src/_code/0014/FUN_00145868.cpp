#include "common.h"

extern "C" {

extern u8 DAT_00588fb4;

/* Returns the byte at 0x588FB4. */
u8 FUN_00145868(void)
{
    return DAT_00588fb4;
}

} /* extern "C" */

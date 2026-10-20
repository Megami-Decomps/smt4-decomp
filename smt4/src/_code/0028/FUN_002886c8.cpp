#include "common.h"

extern "C" {

extern u8 *FUN_00240cd4(void);

/* Flag bit 5 of the first byte of the table entry. */
u32 FUN_002886c8(void)
{
    u8 *entry = FUN_00240cd4();

    return (*entry & 0x20) >> 5;
}

} /* extern "C" */

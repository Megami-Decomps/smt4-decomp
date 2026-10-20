#include "common.h"

extern "C" {

extern u8 *FUN_00240cd4(void);

/* Flag bit 6 of the first byte of the table entry. */
u32 FUN_002886b0(void)
{
    u8 *entry = FUN_00240cd4();

    return (*entry & 0x40) >> 6;
}

} /* extern "C" */

#include "common.h"

extern "C" {

extern u8 *questGetRuntimeStatus(void);

/* Flag bit 6 of the first byte of the table entry. */
u32 FUN_002886b0(void)
{
    u8 *entry = questGetRuntimeStatus();

    return (*entry & 0x40) >> 6;
}

} /* extern "C" */

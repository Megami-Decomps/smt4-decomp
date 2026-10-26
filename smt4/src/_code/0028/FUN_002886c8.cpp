#include "common.h"
#include "code/Code0028_Smt4.h"

extern "C" {

extern u8 *questGetRuntimeStatus(void);

/* Flag bit 5 of the first byte of the table entry. */
u32 FUN_002886c8(void)
{
    u8 *entry = questGetRuntimeStatus();

    return (*entry & 0x20) >> 5;
}

} /* extern "C" */

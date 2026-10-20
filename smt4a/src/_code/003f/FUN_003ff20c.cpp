/* Sets bit 2 of the flags byte of the object returned by FUN_002840e0 to the given value. */
#include "common.h"

extern "C" {

u8 *FUN_002840e0(void);

void FUN_003ff20c(u32 unused, s8 enabled)
{
    u8 *flags = FUN_002840e0();

    *flags = (*flags & ~4) | (enabled << 2);
}

} /* extern "C" */

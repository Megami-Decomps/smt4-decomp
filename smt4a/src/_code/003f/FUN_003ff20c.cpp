/* Sets bit 2 of the flags byte of the object returned by flagsBGetPtr to the given value. */
#include "common.h"

extern "C" {

u8 *flagsBGetPtr(void);

void FUN_003ff20c(u32 unused, s8 enabled)
{
    u8 *flags = flagsBGetPtr();

    *flags = (*flags & ~4) | (enabled << 2);
}

} /* extern "C" */

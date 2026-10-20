#include "common.h"

extern "C" {

u8 *FUN_002840e0(void);

/* Sets the low two flag bits and clears bit 2. */
void FUN_003ff160(void)
{
    u8 *flags = FUN_002840e0();

    *flags = (*flags & ~4) | 3;
}

} /* extern "C" */

#include "common.h"

extern "C" {

u8 *gameDataBlocksGetHalf280C4(void);

/* Stores `value` into flag bit 2. */
void FUN_0040a844(u32 unused, char value)
{
    u8 *flags = gameDataBlocksGetHalf280C4();

    *flags = (*flags & ~4) | (value << 2);
}

} /* extern "C" */

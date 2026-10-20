#include "common.h"

extern "C" {

/* Writes `value` at the cursor in the 16-bit buffer (unless `countOnly` is set) and advances the cursor; always returns 1. */
u32 FUN_0014f280(u16 *buffer, s32 *cursor, u16 value, s32 countOnly)
{
    if (countOnly == 0) {
        buffer[*cursor] = value;
    }
    *cursor = *cursor + 1;
    return 1;
}

} /* extern "C" */

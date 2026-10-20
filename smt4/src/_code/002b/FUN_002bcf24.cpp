#include "common.h"

extern "C" {

/* Writes `ch` at the cursor of a UTF-16 buffer (unless only counting), then advances the cursor; always succeeds. */
u32 FUN_002bcf24(u16 *buffer, int *cursor, u16 ch, int countOnly)
{
    if (countOnly == 0) {
        buffer[*cursor] = ch;
    }
    *cursor = *cursor + 1;
    return 1;
}

} /* extern "C" */

/* NON_MATCHING: loop shape matches; retail keeps `position` in r4 and the length counter in r5, the build swaps them. */
/* Appends the wide string `text` to `buffer` at *position (unless `measureOnly`), advances *position and returns the
 * string's length in characters (0 when there is no position or text). */
#include "common.h"

extern "C" {
void FUN_002e59f8(const void *source, void *destination, u32 bytes);

s32 FUN_0014f2a8(u16 *buffer, s32 *position, const u16 *text, s32 measureOnly)
{
    if (position == NULL || text == NULL) {
        return 0;
    }
    s32 length;

    for (length = 0; text[length] != 0; length++) {
    }
    if (measureOnly == 0) {
        FUN_002e59f8(text, buffer + *position, length * 2);
    }
    *position += length;
    return length;
}
}

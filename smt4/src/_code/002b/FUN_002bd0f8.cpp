/* NON_MATCHING: loop shape matches; retail keeps position in r4 and length in r5, and this build swaps them. */
#include "AsdSDK/Source/Sys/Save/AsdSaveHeader.h"

/* Appends a wide string, or just advances position when measuring; returns the number of characters appended. */
extern "C" s32 FUN_002bd0f8(u16 *buffer, s32 *position, const u16 *text, s32 measureOnly)
{
    if (position == NULL || text == NULL) {
        return 0;
    }
    s32 length;
    for (length = 0; text[length] != 0; ++length) {
    }
    if (measureOnly == 0) {
        memCopy(text, buffer + *position, length * sizeof(*text));
    }
    *position += length;
    return length;
}

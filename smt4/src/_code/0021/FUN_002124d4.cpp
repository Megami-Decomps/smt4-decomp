#include "common.h"

extern "C" {

extern void FUN_002bf288(s32 layer, s32 charWidth, s32 digit, s32 x, s32 y, s32 z);

/* Draws a string of digits, 7 pixels apart, skipping spaces. */
void FUN_002124d4(s32 x, s32 y, s32 z, const s8 *digits)
{
    for (; *digits != '\0'; digits++, x += 7) {
        if (*digits != ' ') {
            FUN_002bf288(2, 13, *digits - '0', x, y, z);
        }
    }
}

} /* extern "C" */

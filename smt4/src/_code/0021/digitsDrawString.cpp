#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {


/* Draws a string of digits, 7 pixels apart, skipping spaces. */
void digitsDrawString(s32 x, s32 y, s32 z, const s8 *digits)
{
    for (; *digits != '\0'; digits++, x += 7) {
        if (*digits != ' ') {
            FUN_002bf288(2, 13, *digits - '0', x, y, z);
        }
    }
}

} /* extern "C" */

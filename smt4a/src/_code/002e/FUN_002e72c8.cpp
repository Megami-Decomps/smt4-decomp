#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {


/* Draw a string of digits (space = skip) as 7-pixel-wide glyphs starting at (x, y). */
void FUN_002e72c8(s32 x, s32 y, u32 color, const s8 *digits)
{
    while (*digits != '\0') {
        if (*digits != ' ') {
            FUN_001835b4(2, 7, *digits - '0', x, y, color);
        }
        digits++;
        x += 7;
    }
}

} /* extern "C" */

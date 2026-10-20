#include "shard/Shard0032.h"

extern "C" {

extern u32 FUN_002a1be8(u32 color);

/* Colour for `mode`: 0 = FUN_002a1be8 of the default, 1 = transparent, else the default 0xE7E3FFFF. */
u32 colorForMode(s32 mode)
{
    u32 color = 0xE7E3FFFF;

    if (mode != 0) {
        if (mode == 1) {
            color = 0;
        }
        return color;
    }
    return FUN_002a1be8(0xE7E3FFFF);
}

} /* extern "C" */

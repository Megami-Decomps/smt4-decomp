#include "shard/Shard004E.h"

extern "C" {

u32 hasFlag80Or1000(u32 unused, u32 *flags)
{
    u32 value = *flags;
    u8 clear = 0;

    if ((value & 0x80) == 0) {
        value = value & 0x1000;
        clear = value == 0;
    }
    if (!clear) {
        value = 1;
    }
    return value;
}

} /* extern "C" */

#include "common.h"

extern "C" {

u8 *gameDataBlockGetArea28350(void);

/* Tests bit `index` of the flag bitmap returned by gameDataBlockGetArea28350. */
bool FUN_003e44ec(u32 index)
{
    u8 *flags = gameDataBlockGetArea28350();

    s32 byte = index / 8;
    s32 bit = index % 8;
    return (flags[byte] & (1 << bit)) != 0;
}

} /* extern "C" */

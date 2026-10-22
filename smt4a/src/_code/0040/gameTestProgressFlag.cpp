#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" const ProgressFlagView *FUN_002c2710(void);

/* Query one of the 110 persistent game-data flags. */
extern "C" bool gameTestProgressFlag(u32 index)
{
    if (index >= 110) {
        return false;
    }
    const u8 *flags = FUN_002c2710()->flags;
    u8 value = flags[index >> 3];
    u8 mask = (u8)(1 << (index & 7));
    return (value & mask) != 0;
}

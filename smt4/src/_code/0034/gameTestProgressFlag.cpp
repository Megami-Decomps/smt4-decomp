#include "shard/GameDataBlocks.h"

extern "C" const ProgressFlagView *FUN_0023d2ec(void);

/* Read one of the 110 persistent progress flags. */
extern "C" bool gameTestProgressFlag(u32 index)
{
    if (index >= 110) {
        return false;
    }
    const u8 *flags = FUN_0023d2ec()->flags;
    u8 value = flags[index >> 3];
    u8 mask = (u8)(1 << (index & 7));
    return (value & mask) != 0;
}

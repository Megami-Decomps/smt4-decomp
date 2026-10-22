/* NON_MATCHING: the compiler folds the packed-byte index into the large field address; retail forms the flag-array base first and uses indexed ldrb. */
#include "shard/GameDataBlocks.h"

extern "C" ProgressFlagView *FUN_002c2710(void);

/* Query one of the 110 persistent game-data flags. */
extern "C" u32 FUN_004082f8(u32 index)
{
    if (index >= 110) {
        return 0;
    }
    ProgressFlagView *data = FUN_002c2710();
    u8 mask = (u8)(1U << (index & 7));
    return (data->flags[index >> 3] & mask) != 0;
}

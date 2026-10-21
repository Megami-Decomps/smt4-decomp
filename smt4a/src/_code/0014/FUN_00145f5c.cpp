/* NON_MATCHING: instruction selection/order differs: retail ldrb r1, [r0, r4, lsr #3]; compiler ldrb r3, [r0, r4, lsr #3]. */
#include "common.h"

extern "C" {

extern const u8 *gameDataBlocksGetStats(void);

/* Tests an indexed flag from the game-data block. */
bool FUN_00145f5c(u32 index)
{
    if (index >= 32) {
        return false;
    }
    const u8 *flags = gameDataBlocksGetStats();
    u8 mask = (u8)(1u << (index & 7));
    return (flags[index >> 3] & mask) != 0;
}

} /* extern "C" */

#include "common.h"

extern "C" {

extern const u8 *gameDataBlocksGetStats(void);

/* Tests an indexed flag from the game-data block. */
bool gameTestFlagBit32(u32 index)
{
    if (index >= 32) {
        return false;
    }
    const u8 *flags = gameDataBlocksGetStats();
    u8 mask = (u8)(1u << (index & 7));
    u8 byte = flags[index >> 3];
    return (byte & mask) != 0;
}

} /* extern "C" */

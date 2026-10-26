#include "common.h"

struct BitFlagState {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 flags[4];
};

extern "C" {

extern BitFlagState *gameDataBlocksGetStats(void);

/* Tests a bit in the second flag word of the game-data block. */
s32 FUN_00145ec8(u32 index)
{
    if (index >= 32) {
        return 0;
    }
    u8 *bits = gameDataBlocksGetStats()->flags;
    u8 mask = (u8)(1u << (index & 7));
    u32 byte = bits[index >> 3];
    return (mask & byte) != 0;
}

} /* extern "C" */

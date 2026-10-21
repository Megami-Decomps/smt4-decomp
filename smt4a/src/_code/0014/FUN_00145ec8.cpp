/* NON_MATCHING: flag-byte addressing differs: retail adds the four-byte header first; compiler folds it into the byte load. */
#include "common.h"

struct BitFlagState {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 flags[4];
};

extern "C" {

extern const BitFlagState *gameDataBlocksGetStats(void);

/* Tests a bit in the second flag word of the game-data block. */
bool FUN_00145ec8(u32 index)
{
    if (index >= 32) {
        return false;
    }
    const BitFlagState *block = gameDataBlocksGetStats();
    u8 mask = (u8)(1u << (index & 7));
    return (block->flags[index >> 3] & mask) != 0;
}

} /* extern "C" */

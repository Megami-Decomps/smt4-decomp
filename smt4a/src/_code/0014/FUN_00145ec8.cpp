/* NON_MATCHING: the flag base now matches (header added first); retail builds the mask in a separate register with a register-shift lsl then ands, this build folds it into `ands rX, rY, rZ, lsl rN`. */
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
    const u8 *flags = block->flags;
    u32 byte = index / 8;
    u32 bit = index % 8;
    return (flags[byte] & (u8)(1u << bit)) != 0;
}

} /* extern "C" */

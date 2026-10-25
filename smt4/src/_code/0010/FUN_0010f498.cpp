/* NON_MATCHING: header addressing now matches; retail loads the flag byte into r1 before building the mask (r3/r2/r0) where the build loads it into r3 after. */
#include "common.h"

struct BitFlagState {
    /* 0x00 */ u32 first;
    /* 0x04 */ u8 flags[4];
};

extern "C" {

extern const BitFlagState *gameGetQuestCenterBlock(void);

/* Tests a bit in the second flag word of the game-data block. */
bool FUN_0010f498(u32 index)
{
    if (index >= 32) {
        return false;
    }
    const BitFlagState *block = gameGetQuestCenterBlock();
    const u8 *flags = block->flags;
    u8 mask = (u8)(1u << (index & 7));
    return (flags[index >> 3] & mask) != 0;
}

} /* extern "C" */

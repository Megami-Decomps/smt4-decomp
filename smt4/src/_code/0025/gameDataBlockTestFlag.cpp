/* Returns 1 if any bit of `mask` is set in the flag byte 0x24b27 of the game data block at +0x88. */
#include "common.h"

extern "C" {

struct Blocks00259594 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 *data;
};

extern Blocks00259594 g_gameDataBlocks;

s32 gameDataBlockTestFlag(u32 mask)
{
    u8 *flags = g_gameDataBlocks.data + 0x88;

    return (mask & flags[0x24b27]) != 0;
}

}

#include "common.h"

extern "C" {

typedef struct GameDataBlocksHead {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03[0x19];
    /* 0x1C */ u32 flags;
} GameDataBlocksHead;

extern GameDataBlocksHead g_gameDataBlocks;

/* Clears byte 2 of the game data blocks and sets the given bits in their flag word. */
void FUN_00333574(u32 bits)
{
    g_gameDataBlocks.unk02 = 0;
    g_gameDataBlocks.flags |= bits;
}

} /* extern "C" */

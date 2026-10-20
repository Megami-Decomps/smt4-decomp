#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 value;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the word at 0xC of the game-data block table. */
u32 FUN_002a46f8(void)
{
    return g_gameDataBlocks.value;
}

} /* extern "C" */

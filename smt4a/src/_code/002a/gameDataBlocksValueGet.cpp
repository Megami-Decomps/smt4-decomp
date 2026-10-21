#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 value;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the word at 0x8 of the game-data block table. */
u32 gameDataBlocksValueGet(void)
{
    return g_gameDataBlocks.value;
}

} /* extern "C" */

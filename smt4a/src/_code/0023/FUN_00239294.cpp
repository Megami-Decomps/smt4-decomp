#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the word at 0x10 of the game-data block table. */
u32 FUN_00239294(void)
{
    return g_gameDataBlocks.unk10;
}

} /* extern "C" */

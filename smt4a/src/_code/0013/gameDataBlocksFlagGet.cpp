#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s8 flag;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

/* Returns the signed byte at 0x2 of the game-data block table. */
s32 gameDataBlocksFlagGet(void)
{
    return g_gameDataBlocks.flag;
}

} /* extern "C" */

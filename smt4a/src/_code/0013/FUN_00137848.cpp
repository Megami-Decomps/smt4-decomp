#include "common.h"

extern "C" {

typedef struct GameDataBlocksView {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 counter;
} GameDataBlocksView;
extern GameDataBlocksView g_gameDataBlocks;

void FUN_00146cd0(u32 value);

/* Passes the word at 0xC of the game-data block table to FUN_00146cd0. */
void FUN_00137848(void)
{
    FUN_00146cd0(g_gameDataBlocks.counter);
}

} /* extern "C" */

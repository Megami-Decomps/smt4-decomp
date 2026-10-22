#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


void FUN_00146cd0(void *value);

/* Passes the word at 0xC of the game-data block table to FUN_00146cd0. */
void FUN_00137848(void)
{
    FUN_00146cd0(g_gameDataBlocks.smallBlock);
}

} /* extern "C" */

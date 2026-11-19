#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Whether any of the bits in `mask` is set in the game data flag byte. */
u8 gameDataTestFlags(u8 mask)
{
    GameSaveBodyA *sub = &g_gameDataBlocks.saveBlock->body;

    return (mask & sub->record.tail.flags) != 0;
}

}

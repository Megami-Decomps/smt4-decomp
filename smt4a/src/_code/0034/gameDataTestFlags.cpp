#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {

/* Whether any of the bits in `mask` is set in the game data flag byte. */
u8 gameDataTestFlags(u8 mask)
{
    GameDataSub *sub = &g_gameDataBlocks.saveBlock->save.sub;

    return (mask & sub->flags) != 0;
}

}

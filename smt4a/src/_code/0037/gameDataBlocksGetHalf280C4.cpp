#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0037.h"

extern "C" {

/* Address of entry `index` of the halfword table at +0x2803C of the save body. */
u16 *gameDataBlocksGetHalf280C4(s32 index)
{
    u8 *block = (u8 *)g_gameDataBlocks.saveBlock;

    return (u16 *)(block + index * 2 + offsetof(GameSaveDataA, body.halves.halves));
}

} /* extern "C" */

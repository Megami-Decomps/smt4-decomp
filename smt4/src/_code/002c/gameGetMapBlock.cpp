#include "shard/GameDataBlocks.h"
#include "shard/SaveWork.h"

extern "C" {

SaveWork *gameGetMapBlock(void)
{
    return reinterpret_cast<SaveWork *>((u8 *)g_gameDataBlocks.saveBlock + 0xa8c0);
}

} /* extern "C" */

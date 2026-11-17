#include "shard/GameDataBlocks.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

u32 saveBlockGetPlaySeconds(void)
{
    return g_gameDataBlocks.saveBlock->body.playSeconds;
}

} /* extern "C" */

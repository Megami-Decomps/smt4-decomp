#include "shard/GameDataBlocks.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

u32 FUN_002907a8(void)
{
    return g_gameDataBlocks.saveBlock->unk1F4E0;
}

} /* extern "C" */

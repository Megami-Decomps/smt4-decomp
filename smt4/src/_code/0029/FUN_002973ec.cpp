#include "shard/GameDataBlocks.h"
#include "camp/Config/Config.h"

extern "C" {

u8 FUN_002973ec(void)
{
    return g_gameDataBlocks.saveBlock->body.unk24B28;
}

} /* extern "C" */

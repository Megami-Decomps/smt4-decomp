#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0034.h"
#include "result/WhisperEffect.h"

extern "C" {

u8 *gameDataBlockGetArea28350(void)
{
    return g_gameDataBlocks.saveBlock->body.area.area282C8;
}

} /* extern "C" */

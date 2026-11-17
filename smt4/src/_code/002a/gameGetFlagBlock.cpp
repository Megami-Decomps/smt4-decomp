#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"
#include "shard/W6_W6Match3_NameFormState.h"

extern "C" {

u8 *gameGetFlagBlock(void)
{
    return g_gameDataBlocks.saveBlock->body.flagBlock;
}

} /* extern "C" */

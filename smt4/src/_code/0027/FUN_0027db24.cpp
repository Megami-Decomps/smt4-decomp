#include "shard/GameDataBlocks.h"
#include "gamedata/Table1bOr1c.h"

extern "C" {

void FUN_0027db24(u8 value)
{
    g_gameDataBlocks.saveBlock->unk1ECD8 = value;
}

} /* extern "C" */

#include "shard/GameDataBlocks.h"
#include "gamedata/Table1bOr1c.h"

extern "C" {

void gameSaveSetBattleResultCode(u8 value)
{
    g_gameDataBlocks.saveBlock->body.unk1EC50 = value;
}

} /* extern "C" */

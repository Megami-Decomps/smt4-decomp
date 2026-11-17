#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
int gameGetSupportUnitData(void)
{
    return (int)g_gameDataBlocks.saveBlock->body.supportUnits;
}
}

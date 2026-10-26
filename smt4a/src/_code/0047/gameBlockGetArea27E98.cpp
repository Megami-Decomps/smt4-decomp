#include "shard/Shard0047.h"
#include "gamedata/GameDataAccess_Smt4a.h"

extern "C" {

extern u8 *gameDataBlocksGetSaveData(void);

u8 *gameBlockGetArea27E98(void)
{
    return gameDataBlocksGetSaveData() + 0x27E98;
}

} /* extern "C" */

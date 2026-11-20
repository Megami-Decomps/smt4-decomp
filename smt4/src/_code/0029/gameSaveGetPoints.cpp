#include "shard/GameDataBlocks.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {

u32 gameSaveGetPoints(void)
{
    return g_gameDataBlocks.saveBlock->body.points;
}

} /* extern "C" */

#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"
#include "event/2dEvent/Npc2d.h"

extern "C" {

u8 *gameGetCounters(void)
{
    return g_gameDataBlocks.saveBlock->body.counters;
}

} /* extern "C" */

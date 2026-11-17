#include "gamedata/GameSaveBlocks.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {

/* Returns the counters of the save body. */
u8 *gameGetCounters(void)
{
    return g_gameDataBlocks.saveBlock->body.runtime.counters;
}

} /* extern "C" */

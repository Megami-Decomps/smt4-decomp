#include "gamedata/GameSaveBlocks.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {

/* Returns the banked flag values of the save body. */
u8 *flagValueGetStorage(void)
{
    return g_gameDataBlocks.saveBlock->body.flagValues;
}

} /* extern "C" */

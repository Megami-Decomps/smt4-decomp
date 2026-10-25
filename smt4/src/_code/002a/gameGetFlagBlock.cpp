#include "shard/GameDataBlocks.h"
#include "shard/W6_W6Match3_NameFormState.h"

extern "C" {

u8 *gameGetFlagBlock(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0xb9a4;
}

} /* extern "C" */

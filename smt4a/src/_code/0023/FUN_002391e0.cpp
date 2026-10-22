/* NON_MATCHING: retail uses ldr r1, [pc, #16] where the compiled block uses ldr r1, [pc, #8]. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

u8 FUN_002391e0(void)
{
    GameSaveImage *save = reinterpret_cast<GameSaveImage  *>(g_gameDataBlocks.saveBlock);
    return save->work.state;
}

} /* extern "C" */

/* NON_MATCHING: retail uses ldr r2, [pc, #32] where the compiled block uses ldr r2, [pc, #28]. */
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

void FUN_00229fd0(s32 flagIndex, u8 mask)
{
    GameSaveImage *save = static_cast<GameSaveImage *>(g_gameDataBlocks.saveBlock);
    save->work.flags[flagIndex] |= mask;
}

} /* extern "C" */

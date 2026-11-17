#include "gamedata/MapSaveBlockA.h"

extern "C" {

/* Script command: sets the game flags block's word at 0x15cc to 47. */
u32 FUN_0037d5d0(void)
{
    gameFlagsGetBlock()->sceneResult = 47;
    return 1;
}

} /* extern "C" */

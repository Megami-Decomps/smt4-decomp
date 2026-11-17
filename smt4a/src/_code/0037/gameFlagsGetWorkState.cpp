#include "gamedata/MapSaveBlockA.h"

extern "C" {

u32 gameFlagsGetWorkState(void)
{
    MapSaveBlockA *work = gameFlagsGetBlock();
    return work != NULL ? work->currentNavi : 0;
}

} /* extern "C" */

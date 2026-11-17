#include "gamedata/MapSaveBlockA.h"

extern "C" {

u32 gameFlagsGetWorkValue(void)
{
    MapSaveBlockA *work = gameFlagsGetBlock();

    return work->unk0018;
}

} /* extern "C" */

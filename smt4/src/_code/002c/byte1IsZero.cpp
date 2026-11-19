#include "shard/Sys43e310.h"
#include "gamedata/SaveLoadProcess.h"

extern "C" {

u8 byte1IsZero(void)
{
    return g_saveLoadThread.unk01 == 0;
}

} /* extern "C" */

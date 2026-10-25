#include "shard/Sys43e310.h"
#include "gamedata/SaveLoadProcess.h"

extern "C" {

u8 FUN_002cedbc(void)
{
    return g_saveLoadThread.unk01 == 0;
}

} /* extern "C" */

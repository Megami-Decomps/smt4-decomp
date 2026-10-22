#include "shard/Sys43e310.h"

extern "C" {

s32 saveLoadGetThreadStatus(void)
{
    return g_saveLoadThread.unk02;
}

} /* extern "C" */

#include "shard/NaviMain.h"

extern "C" {

u32 NaviMain_GetCurrentMap(void)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

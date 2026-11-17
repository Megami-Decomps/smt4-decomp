#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/NaviMain_GetCurrentMap.h"

extern "C" {

u32 NaviMain_GetCurrentMap(void)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

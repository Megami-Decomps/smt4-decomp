#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/NaviMain_GetCurrentMap.h"

extern "C" {

u32 NaviMain_GetCurrentMap(const void *unused)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

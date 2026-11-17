#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0049.h"
#include "shard/NaviMain_GetCurrentMap.h"

extern "C" {

u32 NaviMain_GetCurrentMap(int arg0)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

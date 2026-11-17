#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void naviMainSetCurrentMap(u32 unused, u32 map)
{
    g_naviMain->currentMap = map;
}

} /* extern "C" */

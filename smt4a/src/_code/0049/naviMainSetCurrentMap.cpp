#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0049.h"

extern "C" {

void naviMainSetCurrentMap(u32 unused, u32 value)
{
    g_naviMain->currentMap = value;
}

} /* extern "C" */

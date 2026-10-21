#include "shard/NaviMain.h"

extern "C" {

void naviMainSetCurrentMap(u32 unused, u32 map)
{
    g_naviMain->currentMap = map;
}

} /* extern "C" */

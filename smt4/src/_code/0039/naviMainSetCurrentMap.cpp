#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

void naviMainSetCurrentMap(u32 unused, u32 map)
{
    g_naviMain->currentMap = map;
}

} /* extern "C" */

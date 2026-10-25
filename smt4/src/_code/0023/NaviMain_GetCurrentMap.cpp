#include "shard/NaviMain.h"
#include "shard/NaviMain_GetCurrentMap.h"

extern "C" {
extern NaviMain *g_naviMain;

u32 NaviMain_GetCurrentMap(void)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

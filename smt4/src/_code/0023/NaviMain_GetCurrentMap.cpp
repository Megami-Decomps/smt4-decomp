#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

u32 NaviMain_GetCurrentMap(void)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

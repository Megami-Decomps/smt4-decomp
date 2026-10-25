#include "shard/NaviMain.h"
#include "shard/Shard0049.h"
#include "shard/NaviMain_GetCurrentMap.h"

extern "C" {
extern NaviMainA *g_naviMain;

u32 NaviMain_GetCurrentMap(int arg0)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

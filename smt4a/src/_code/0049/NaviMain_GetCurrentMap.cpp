#include "shard/NaviMain.h"
#include "shard/Shard0049.h"

extern "C" {
extern NaviMainA *g_naviMain;

u32 NaviMain_GetCurrentMap(void)
{
    return g_naviMain->currentMap;
}

} /* extern "C" */

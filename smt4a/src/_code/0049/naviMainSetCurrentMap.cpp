#include "shard/NaviMain.h"
#include "shard/Shard0049.h"

extern "C" {
extern NaviMainA *g_naviMain;

void naviMainSetCurrentMap(u32 unused, u32 value)
{
    g_naviMain->currentMap = value;
}

} /* extern "C" */

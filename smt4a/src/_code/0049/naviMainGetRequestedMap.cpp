#include "shard/NaviMain.h"
#include "shard/Shard0049.h"

extern "C" {
extern NaviMainA *g_naviMain;

u32 naviMainGetRequestedMap(void)
{
    return g_naviMain->mapRequest.mapId;
}

} /* extern "C" */

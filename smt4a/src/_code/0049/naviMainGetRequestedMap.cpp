#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0049.h"

extern "C" {

u32 naviMainGetRequestedMap(void)
{
    return g_naviMain->mapRequest.mapId;
}

} /* extern "C" */

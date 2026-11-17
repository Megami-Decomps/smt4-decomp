#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0049.h"
#include "map/lmapMain.h"

extern "C" {

u32 FUN_00492c84(void *arg0)
{
    return g_naviMain->mapRequest.unk08;
}

} /* extern "C" */

#include "shard/NaviMain.h"
#include "shard/Shard0049.h"
#include "map/lmapMain.h"

extern "C" {
extern NaviMainA *g_naviMain;

u32 FUN_00492c84(void *arg0)
{
    return g_naviMain->mapRequest.unk08;
}

} /* extern "C" */

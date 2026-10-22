#include "shard/NaviMain.h"
#include "shard/Shard0049.h"

extern "C" {
extern NaviMainA *g_naviMain;

u32 FUN_00492c70(void)
{
    return g_naviMain->mapRequest.unk04;
}

} /* extern "C" */

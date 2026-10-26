#include "shard/NaviMain.h"
#include "shard/Shard0049.h"
#include "code/Code0049_Smt4a.h"

extern "C" {
extern NaviMainA *g_naviMain;

u32 FUN_00492c70(void)
{
    return g_naviMain->mapRequest.unk04;
}

} /* extern "C" */

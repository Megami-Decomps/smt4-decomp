#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "code/Code0039.h"

extern "C" {

void FUN_0039f860(u32 unused, u32 value)
{
    g_naviMain->unk2C = value;
}

} /* extern "C" */

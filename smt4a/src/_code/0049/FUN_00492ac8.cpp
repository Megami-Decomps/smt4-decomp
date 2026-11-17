#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard0049.h"

extern "C" {

void FUN_00492ac8(u32 unused, u32 value)
{
    g_naviMain->unk2C = value;
}

} /* extern "C" */

#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "code/Code0023_Smt4.h"

extern "C" {

u32 NaviMain_GetPosX(const void *unused)
{
    return g_naviMain->posX;
}

} /* extern "C" */

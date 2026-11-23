#include "shard/NaviMain.h"
#include "code/Code0023_Smt4.h"
#include "mapnavi/NaviMainGlobals.h"

extern "C" {

u32 NaviMain_GetPosY(const void *unused)
{
    return g_naviMain->posY;
}

} /* extern "C" */

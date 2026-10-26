#include "shard/NaviMain.h"
#include "code/Code0023_Smt4.h"

extern "C" {
extern NaviMain *g_naviMain;

u32 NaviMain_GetPosX(void)
{
    return g_naviMain->posX;
}

} /* extern "C" */

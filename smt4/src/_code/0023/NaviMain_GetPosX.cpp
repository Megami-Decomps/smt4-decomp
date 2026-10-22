#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

u32 NaviMain_GetPosX(void)
{
    return g_naviMain->posX;
}

} /* extern "C" */

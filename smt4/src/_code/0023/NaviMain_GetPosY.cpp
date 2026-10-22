#include "shard/NaviMain.h"

extern "C" {
extern NaviMain *g_naviMain;

u32 NaviMain_GetPosY(void)
{
    return g_naviMain->posY;
}

} /* extern "C" */

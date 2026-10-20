#include "shard/NaviMain.h"

extern "C" {

u32 NaviMain_GetPosY(void)
{
    return g_naviMain->posY;
}

} /* extern "C" */

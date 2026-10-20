#include "shard/NaviMain.h"

extern "C" {

u32 NaviMain_GetPosX(void)
{
    return g_naviMain->posX;
}

} /* extern "C" */

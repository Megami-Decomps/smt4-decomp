#include "shard/NaviMain.h"

extern "C" {

u32 NaviMain_GetPosY(void)
{
    return DAT_0044cdf0->posY;
}

} /* extern "C" */

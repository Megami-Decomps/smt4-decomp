#include "shard/NaviMain.h"

extern "C" {

u32 NaviMain_GetPosX(void)
{
    return DAT_0044cdf0->posX;
}

} /* extern "C" */

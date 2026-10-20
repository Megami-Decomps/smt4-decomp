#include "shard/NaviMain.h"

extern "C" {

u32 NaviMain_GetCurrentMap(void)
{
    return DAT_0044cdf0->currentMap;
}

} /* extern "C" */

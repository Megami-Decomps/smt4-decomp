#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard003B.h"

extern "C" {

u8 naviMainIsActive(void)
{
    return g_naviMain != NULL;
}

} /* extern "C" */

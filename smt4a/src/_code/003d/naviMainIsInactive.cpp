#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
#include "shard/Shard003D.h"

extern "C" {

u8 naviMainIsInactive(void)
{
    if (g_naviMain != NULL) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

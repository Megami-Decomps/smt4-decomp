#include "map/MapGimicGlobal.h"

extern "C" {


bool mapGimicIsIdle(void)
{
    if (g_mapGimic->busy != 0) {
        return false;
    }
    return true;
}

} /* extern "C" */

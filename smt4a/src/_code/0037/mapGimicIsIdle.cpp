#include "map/mapGimic.h"

extern "C" {

extern MapGimic *g_mapGimic;

bool mapGimicIsIdle(void)
{
    if (g_mapGimic->unk04 != 0) {
        return false;
    }
    return true;
}

} /* extern "C" */

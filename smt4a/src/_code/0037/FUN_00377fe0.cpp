#include "map/mapGimic.h"

extern "C" {

extern MapGimic *g_mapGimic;

bool FUN_00377fe0(void)
{
    if (g_mapGimic->unk04 != 0) {
        return false;
    }
    return true;
}

} /* extern "C" */

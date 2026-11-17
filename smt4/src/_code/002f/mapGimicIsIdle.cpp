#include "map/MapGimicGlobal.h"

extern "C" {

/* 1 when no gimmick rebuild is pending. */
u8 mapGimicIsIdle(void)
{
    if (g_mapGimic->busy != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */

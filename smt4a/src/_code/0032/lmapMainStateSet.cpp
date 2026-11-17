#include "common.h"
#include "map/LmapMainGlobals.h"

extern "C" {
/* Reads or updates the requested state. */
void lmapMainStateSet(u32 value)
{
    LmapMainStateA *map = g_lmapMainState;
    if (map->state != value) {
        map->state = value;
        map->stateStep = 0;
        map->stateTime = 0;
    }
}
}

#include "common.h"
#include "map/LmapMainGlobals.h"

extern "C" {
/* Reads or updates the requested state. */
void lmapMainStateSet(u32 value)
{
    LmapMainState *map = g_lmapMainState;
    if (map->state != value) {
        map->state = value;
        map->stateStep = 0;
        map->stateTime = 0;
    }
}
}

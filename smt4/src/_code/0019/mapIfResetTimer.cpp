#include "map/MapIfTimer.h"

extern "C" {

/* Resets the map-interface timer. */
void mapIfResetTimer(void)
{
    g_mapIfTimer->state = 0;
    g_mapIfTimer->frames = 0;
}

} /* extern "C" */

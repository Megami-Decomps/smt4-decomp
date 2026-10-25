#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapMainCallbackWork *g_mapMain;

static __inline void mapSetRequested(MapMainCallbackWork *map, u8 value)
{
    map->requested = value;
}

/* Set the main map's request flag. */
void mapMainRequest(void)
{
    mapSetRequested(g_mapMain, 1);
}

}

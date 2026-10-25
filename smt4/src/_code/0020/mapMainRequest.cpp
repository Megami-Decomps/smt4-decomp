#include "shard/W5_W5Match2_MapCallbacks.h"

static __inline void mapMainSetRequested(MapMainCallbackWork *work, u32 requested)
{
    work->requested = requested;
}

extern "C" {

extern MapMainCallbackWork *g_mapMain;

/* Set the main map's request flag. */
void mapMainRequest(void)
{
    mapMainSetRequested(g_mapMain, 1);
}

}

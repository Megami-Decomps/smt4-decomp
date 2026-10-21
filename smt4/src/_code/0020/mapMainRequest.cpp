/* NON_MATCHING: armcc keeps the map pointer in r1 rather than retail's r0. */
#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapMainCallbackWork *g_mapMain;

/* Set the main map's request flag. */
void mapMainRequest(void)
{
    g_mapMain->requested = 1;
}

}

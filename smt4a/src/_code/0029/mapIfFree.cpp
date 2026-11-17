#include "map/MapIfGlobals.h"

extern "C" {

void asdMemFree(void *block);

/* Frees the map interface's state block and clears its pointer. */
void mapIfFree(u32 handle)
{
    if (g_mapIf.state != NULL) {
        asdMemFree(g_mapIf.state);
        g_mapIf.state = NULL;
    }
}

} /* extern "C" */

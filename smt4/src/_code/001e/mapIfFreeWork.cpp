#include "map/MapIfGlobals.h"

extern "C" {

s32 asdMemFree(void *block);

/* Free the map interface's state block and clear its pointer. */
void mapIfFreeWork(void)
{
    if (g_mapIf.state != NULL) {
        asdMemFree(g_mapIf.state);
        g_mapIf.state = NULL;
    }
}

}

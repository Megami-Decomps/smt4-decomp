#include "common.h"

extern "C" {

struct MapInterfaceWork;
extern MapInterfaceWork *g_mapIf;
s32 asdMemFree(void *block);

/* Free the map interface work and clear its owner pointer. */
void mapIfFreeWork(void)
{
    if (g_mapIf != NULL) {
        asdMemFree(g_mapIf);
        g_mapIf = NULL;
    }
}

}

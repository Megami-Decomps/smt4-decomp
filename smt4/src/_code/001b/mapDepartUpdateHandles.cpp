#include "map/mapDepart.h"

extern "C" {

void asdMdlManagerMarkDestroy(u32 handle);

extern MapDepartWork *g_mapDepartWork;

void mapDepartUpdateHandles(void)
{
    if (g_mapDepartWork->handleA != 0) {
        asdMdlManagerMarkDestroy(g_mapDepartWork->handleA);
    }
    if (g_mapDepartWork->handleB != 0) {
        asdMdlManagerMarkDestroy(g_mapDepartWork->handleB);
    }
}

} /* extern "C" */

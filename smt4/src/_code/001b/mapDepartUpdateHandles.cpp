#include "map/mapDepart.h"

extern "C" {

void FUN_00152bec(u32 handle);

extern MapDepartWork *g_mapDepartWork;

void mapDepartUpdateHandles(void)
{
    if (g_mapDepartWork->handleA != 0) {
        FUN_00152bec(g_mapDepartWork->handleA);
    }
    if (g_mapDepartWork->handleB != 0) {
        FUN_00152bec(g_mapDepartWork->handleB);
    }
}

} /* extern "C" */

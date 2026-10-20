#include "map/mapDepart.h"

extern "C" {

extern MapDepartWorkA *g_mapDepartWork;

void mapDepartAdvanceState(void)
{
    if (g_mapDepartWork->state == 1) {
        g_mapDepartWork->state = 2;
    }
}

} /* extern "C" */

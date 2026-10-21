#include "map/mapDepart.h"

extern "C" {

extern MapDepartWork *g_mapDepartWork;

/* Clears the departure state and its two loaded-data descriptors. */
void mapDepartClearData(void)
{
    g_mapDepartWork->state = 0;
    g_mapDepartWork->dataA = NULL;
    g_mapDepartWork->sizeA = 0;
    g_mapDepartWork->dataB = NULL;
    g_mapDepartWork->sizeB = 0;
}

} /* extern "C" */

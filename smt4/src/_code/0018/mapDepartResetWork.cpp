#include "map/mapDepart.h"

extern "C" {

extern MapDepartWork *g_mapDepartWork;

/* Clears the departure's counters and handles. */
void mapDepartResetWork(void)
{
    MapDepartWork *work = g_mapDepartWork;

    work->unk00 = 0;
    work->mapId = 0;
    work->areaId = 0;
    work->modelState = 0;
    work->handleA = 0;
    work->handleB = 0;
}

} /* extern "C" */

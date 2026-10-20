#include "map/mapDepart.h"

extern "C" {

extern MapDepartWork *g_mapDepartWork;

/* Clears the departure's counters and handles. */
void mapDepartResetWork(void)
{
    MapDepartWork *work = g_mapDepartWork;

    work->unk00 = 0;
    work->unk04 = 0;
    work->unk06 = 0;
    work->unk08 = 0;
    work->handleA = 0;
    work->handleB = 0;
}

} /* extern "C" */

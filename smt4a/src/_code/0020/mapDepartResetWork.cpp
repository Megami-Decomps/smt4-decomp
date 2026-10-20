#include "map/mapDepart.h"

extern "C" {

extern MapDepartWorkA *g_mapDepartWork;

/* Clears the departure's counters. */
void mapDepartResetWork(void)
{
    MapDepartWorkA *work = g_mapDepartWork;

    work->unk00 = 0;
    work->unk04 = 0;
    work->unk06 = 0;
    work->unk08 = 0;
}

} /* extern "C" */

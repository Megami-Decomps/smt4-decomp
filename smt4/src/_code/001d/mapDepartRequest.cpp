#include "map/mapDepart.h"

extern "C" {

extern MapDepartWork *g_mapDepartWork;

/* Queues a map departure with the supplied identifiers. */
void mapDepartRequest(u16 destination, u16 entrance)
{
    g_mapDepartWork->modelState = 0;
    g_mapDepartWork->mapId = destination;
    g_mapDepartWork->areaId = entrance;
    g_mapDepartWork->unk0A[0] = 1;
}

} /* extern "C" */

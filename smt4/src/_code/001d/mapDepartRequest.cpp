#include "map/mapDepart.h"

extern "C" {

extern MapDepartWork *g_mapDepartWork;

/* Queues a map departure with the supplied identifiers. */
void mapDepartRequest(u16 destination, u16 entrance)
{
    g_mapDepartWork->unk08 = 0;
    g_mapDepartWork->unk04 = destination;
    g_mapDepartWork->unk06 = entrance;
    g_mapDepartWork->unk0A[0] = 1;
}

} /* extern "C" */

#include "map/mapDepart.h"

extern "C" MapDepart *g_mapDepart;

// Release the departure block once its task ends.
extern "C" MapDepart *mapDepartReleaseOnTaskEnd()
{
    g_mapDepart->freeOnEnd = 1;
    return g_mapDepart;
}

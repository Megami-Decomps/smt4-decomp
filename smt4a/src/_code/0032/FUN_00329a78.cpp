#include "map/mapDepart.h"

extern "C" MapDepart *g_mapDepart;

// Release the departure block once its task ends.
extern "C" MapDepart *FUN_00329a78()
{
    g_mapDepart->freeOnEnd = 1;
    return g_mapDepart;
}

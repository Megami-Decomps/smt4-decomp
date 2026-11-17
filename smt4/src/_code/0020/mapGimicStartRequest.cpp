#include "map/MapGimicGlobal.h"

extern "C" {

/* Starts loading the map units of an area: clears the loader's progress. */
void mapGimicStartRequest(u16 area, u16 subArea)
{
    g_mapGimic->step = 0;
    g_mapGimic->index = 0;
    g_mapGimic->area = area;
    g_mapGimic->subArea = subArea;
    g_mapGimic->loaded = 0;
    g_mapGimic->cloneAvailable = 0;
}

}

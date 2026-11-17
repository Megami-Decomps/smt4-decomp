#include "map/MapIfGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
static void mapSlotDestroy(MapIfModelMarker *marker)
{
    asdMdlManagerMarkDestroy(marker->model);
    marker->active = 0;
}

void mapIfDestroyModelSlots(void)
{
    MapIfState *map = g_mapIf.state;
    mapSlotDestroy(&map->modelMarkers[0]);
    mapSlotDestroy(&map->modelMarkers[1]);
}
}

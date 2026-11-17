#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerMarkDestroy(NodeEnableNode *model);
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

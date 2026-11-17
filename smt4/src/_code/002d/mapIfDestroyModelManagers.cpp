#include "map/MapIfGlobals.h"

extern "C" {
void asdMdlManagerDestroy(NodeEnableNode *model);

static void destroySlotManager(MapIfModelMarker *marker)
{
    asdMdlManagerDestroy(marker->model);
    marker->model = NULL;
}

void mapIfDestroyModelManagers(void)
{
    MapIfState *map = g_mapIf.state;
    destroySlotManager(&map->modelMarkers[0]);
    destroySlotManager(&map->modelMarkers[1]);
}
}
